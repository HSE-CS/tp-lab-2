#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
void merge(T* arr, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	T* L = new T[n1];
	T* R = new T[n2];
 
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
 
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

template<>
void merge(char** arr, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	char** L = new char* [n1];
	char** R = new char* [n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2)
	{
		if (strlen(L[i]) < strlen(R[j]))
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

template<typename T>
void mergesort(T* arr, int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergesort(arr, l, m);
		mergesort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

template<>
void mergesort(char** arr, int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergesort(arr, l, m);
		mergesort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

template <typename T> void msort(T* arr, int n)
{
	mergesort(arr, 0, n - 1);
}


