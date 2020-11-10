#pragma once

unsigned int strSize(char* str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
		++i;
	return i;
}

template <typename T>
void Merge(T* Arr, int first, int second)
{
	int middle, start, final, j;
	T* mas = new T[100];
	middle = (first + second) / 2; 
	start = first; 
	final = middle + 1; 
	for (j = first; j <= second; j++) 
		if ((start <= middle) && ((final > second) || (Arr[start] < Arr[final])))
		{
			mas[j] = Arr[start];
			start++;
		}
		else
		{
			mas[j] = Arr[final];
			final++;
		}
	
	for (j = first; j <= second; j++) Arr[j] = mas[j];
	delete[]mas;
}

template <>
void Merge<char*>(char** Arr, int first, int second)
{
	int middle, start, final, j;
	char** mas = new char*[100];
	for (int i = 0; i < 100; ++i)
		mas[i] = new char[400];
	middle = (first + second) / 2; 
	start = first; 
	final = middle + 1; 
	for (j = first; j <= second; j++) 
		if ((start <= middle) && ((final > second) || (strSize(Arr[start]) < strSize(Arr[final]) )))
		{
			mas[j] = Arr[start];
			start++;
		}
		else
		{
			mas[j] = Arr[final];
			final++;
		}
	
	for (j = first; j <= second; j++) Arr[j] = mas[j];
	delete[]mas;
}

template <typename T>
void MergeSort(T(&A), int first, int second)
{
	if (first < last)
	{
		MergeSort(A, first, (first + second) / 2); 
		MergeSort(A, (first + second) / 2 + 1, second); 
		Merge(A, first, second); 
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