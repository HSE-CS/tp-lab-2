#pragma once
#include <cstring>

template <typename T>
bool comp(T a, T b)
{
	return a < b;
}

template<>
bool comp <char*>(char* a, char* b)
{
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* a, size_t size)
{
	if (size > 1)
	{
		size_t pivot = size / 2;

		T* al = new T[pivot];
		T* ar = new T[size - pivot];

		for (size_t i = 0; i < pivot; i++)
			al[i] = a[i];
		for (size_t i = 0; i < size - pivot; i++)
			ar[i] = a[i + pivot];

		msort(al, pivot);
		msort(ar, size - pivot);

		size_t k = 0;
		size_t i = 0, j = 0;
		while (i < pivot && j < size - pivot)
		{
			if (comp(al[i], ar[j]))
			{
				a[k] = al[i];
				i++;
			}
			else
			{
				a[k] = ar[j];
				j++;
			}
			k++;

		}

		while (i < pivot)
		{
			a[k] = al[i];
			i++;
			k++;
		}
		while (j < size - pivot)
		{
			a[k] = ar[j];
			j++;
			k++;
		}

	}
}
