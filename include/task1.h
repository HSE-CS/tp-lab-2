#define _CRT_SECURE_NO_WARNINGS
#ifndef TASK1_H
#define TASK1_H
#include <cstring>

using namespace std;

template <typename T> void MergeSort(T* a, int first, int last, int size)
{
	if (first == last) return;

	int middle = (first + last + 1) / 2;
	MergeSort(a, first, middle - 1, size); //сортировка левой
	MergeSort(a, middle, last, size);       //сортировка правой части
	int j = 0;
	T* mas = new T[size] {0};
	int start = first;
	int f = middle;
	for (j = 0; j < last - first + 1; j++)
	{
		if ((f > last) || ((start <= middle - 1) && (a[start] < a[f])))
		{
			mas[j] = a[start];
			start += 1;
		}
		else
		{
			mas[j] = a[f];
			f += 1;
		}
	}
	for (j = 0; j < last - first + 1; j++)
	{
		a[first + j] = mas[j];
	}
	delete[] mas;
}

template <> void MergeSort(char* *a, int first, int last, int size)
{
	if (first == last) return;

	int middle = (first + last + 1) / 2;
	MergeSort(a, first, middle - 1, size); //сортировка левой
	MergeSort(a, middle, last, size);       //сортировка правой части
	int j = 0;
	char** mas = new char*[size];
	int start = first;
	int f = middle;
	for (j = 0; j < last - first + 1; j++)
	{
		if ((f > last) || ((start <= middle - 1) && (strlen(a[start]) < strlen(a[f]))))
		{
			mas[j] = a[start];
			start += 1;
		}
		else
		{
			mas[j] = a[f];
			f += 1;
		}
	}
	for (j = 0; j < last - first + 1; j++)
	{
		a[first + j] = mas[j];
	}
}


template <typename T> void msort(T *arr, int size)
{
	MergeSort(arr, 0, size - 1, size);
}

#endif
