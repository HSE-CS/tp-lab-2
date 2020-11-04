#ifndef TASK1_H
#define TASK1_H
#include <string.h>

template <typename T> bool comp(T a, T b)
{
	return(a < b);
}
template <> bool comp(char* a, char* b)
{
	return(strlen(a) < strlen(b));
}

template <typename T> T* merge(T* arr1, size_t len1, T* arr2, size_t len2)
{
	size_t i1 = 0, i2 = 0;
	T* result = new T[len1 + len2]{ 0 };
	int step = 0;
	while (i1 < len1 && i2 < len2)
	{
		if (comp(arr1[i1],arr2[i2]))
		{
			result[step] = arr1[i1];
			step+=1;
			i1+=1;

		}
		else
		{
			result[step] = arr2[i2];
			step += 1;
			i2 += 1;
		}
		
	}
	while (i1 < len1)
	{
		result[step] = arr1[i1];
		step++;
		i1++;
	}
	while (i2 < len2)
	{
		result[step] = arr2[i2];
		step++;
		i2++;
	}
	return result;
}
template <typename T> T* msort(T *arr, size_t size)
{
	if (size <= 1)
		return arr;
	size_t mid = size / 2 + size % 2;
	T* left = new T[mid]{ 0 };
	T* right = new T[size - mid]{ 0 };
	for (size_t i=0; i<mid; i++)
	{
		left[i] = arr[i];
		right[i] = arr[mid+i];
	}
	return merge(msort(left, mid), mid, msort(right, size-mid), size-mid);
}

#endif