#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
void mergesort(T* arr, int left, int middle, int right) 
{
	int sizeleft = middle - left + 1, sizeright = right - middle;
	T* leftarr = new T[sizeleft];
	for (int i = 0; i < sizeleft; i++)
		leftarr[i] = arr[left + i];
	T* rightarr= new T[sizeright];
	for (int i = 0; i < sizeright; i++)
		rightarr[i] = arr[middle + 1 + i];
	int fromleft = 0, fromright = 0, newid = left;
	start:
	if ((fromleft < sizeleft) && (fromright < sizeright))
	{
		if (leftarr[fromleft] <= rightarr[fromright]) 
		{
			arr[newid] = leftarr[fromleft];
			fromleft++;
			newid++;
			goto start;
		}
		else 
		{
			arr[newid] = rightarr[fromright];
			fromright++;
			newid++;
			goto start;
		}
	}
	else if (fromleft < sizeleft) 
	{
		arr[newid] = leftarr[fromleft];
		fromleft++;
		newid++;
		goto start;
	}
	else if (fromright < sizeright) 
	{
		arr[newid] = rightarr[fromright];
		fromright++;
		newid++;
		goto start;
	}
}

template <>
void mergesort(char** arr, int left, int middle, int right) 
{
	int sizeleft = middle - left + 1, sizeright = right - middle;
	char** lefrarr = new char* [sizeleft];
	for (int i = 0; i < sizeleft; i++)
		lefrarr[i] = arr[left + i];
	char** rightarr = new char* [sizeright];
	for (int i = 0; i < sizeright; i++)
		rightarr[i] = arr[middle + 1 + i];
	int fromleft = 0, fromright = 0, newid = left;
	start2:
	if ((fromleft < sizeleft) && (fromright < sizeright))
	{
		if (strlen(lefrarr[fromleft]) < strlen(rightarr[fromright]))
		{
			arr[newid] = lefrarr[fromleft];
			fromleft++;
			newid++;
			goto start2;
		}
		else 
		{
			arr[newid] = rightarr[fromright];
			fromright++;
			newid++;
			goto start2;
		}
	}
	else if (fromleft < sizeleft) 
	{
		arr[newid] = lefrarr[fromleft];
		fromleft++;
		newid++;
		goto start2;
	}
	else if (fromright < sizeright) 
	{
		arr[newid] = rightarr[fromright];
		fromright++;
		newid++;
		goto start2;
	}
}

template <typename T>
void descent(T arr, int left, int right)
{
	if (left < right)
	{
		int middle = left + (right - left) / 2;
		descent(arr, left, middle);
		descent(arr, middle + 1, right);
		mergesort(arr, left, middle, right);
	}
}

template <>
void descent(char** arr, int left, int right)
{
	if (left < right)
	{
		int middle = left + (right - left) / 2;
		descent(arr, left, middle);
		descent(arr, middle + 1, right);
		mergesort(arr, left, middle, right);
	}
}

template <typename T>
void msort(T* arr, int N)
{
	descent(arr, 0, N-1);
}

#endif