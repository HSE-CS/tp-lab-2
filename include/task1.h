#pragma once

unsigned int strSize(char* str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
		++i;
	return i;
}

template <typename T>
void Merge(T* A, int first, int last)
{
	int middle, start, final, j;
	T* mas = new T[100];
	middle = (first + last) / 2;
	start = first; 
	final = middle + 1; 
	for (j = first; j <= last; j++) 
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
}

template <>
void Merge<char*>(char** A, int first, int last)
{
	int middle, start, final, j;
	char** mas = new char*[100];
	for (int i = 0; i < 100; ++i)
		mas[i] = new char[400];
	middle = (first + last) / 2; 
	start = first;
	final = middle + 1; 
	for (j = first; j <= last; j++) 
		if ((start <= middle) && ((final > last) || (strSize(A[start]) < strSize(A[final]) )))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
}

template <typename T>
void MergeSort(T(&A), int first, int last)
{
	if (first < last)
	{
		MergeSort(A, first, (first + last) / 2); 
		MergeSort(A, (first + last) / 2 + 1, last); 
		Merge(A, first, last); 
	}
}

template <typename T>
void msort(T(&A), unsigned int size)
{
	MergeSort(A, 0, size - 1);
}

template<>
void msort<char*>(char* (&A), unsigned int size)
{
	MergeSort(A, 0, size - 1);
} 