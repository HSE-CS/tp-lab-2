#pragma once
#include <cstring>
template <typename T> bool comp(T a, T b)
{
	return (a <= b);
}

template <> bool comp(char* a, char* b)
{
	return (strlen(a) < strlen(b));
}

template <typename T> void merge(T* a, size_t left, size_t mid, size_t right)
{
	T* buf = new T[right + 1];

	for (int i = left; i <= right; i++)
		buf[i] = a[i];

	int i = left, j = mid + 1;

	for (int k = left; k <= right; ++k)
	{
		if (i > mid)
		{
			a[k] = buf[j];
			j++;
		}
		else if (j > right)
		{
			a[k] = buf[i];
			i++;
		}
		else if (comp(buf[i], buf[j]))
		{
			a[k] = buf[i];
			i++;
		}
		else
		{
			a[k] = buf[j];
			j++;
		}
	}

	return;
}

template <typename T> void mergesort(T* a, size_t left, size_t right)
{
	if (right <= left)
		return;

	size_t mid = (left + right) / 2;

	mergesort(a, left, mid);
	mergesort(a, mid + 1, right);
	merge(a, left, mid, right);

}

template <typename T> void msort(T* a, size_t n)
{
	mergesort(a, 0, n - 1);
}
