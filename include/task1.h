#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void merge(T* arr, int left, int middle, int right) 
{
	int ,sizeleft = middle - left + 1, sizeright = right - middle;
	T leftarr[sizeleft], rightarr[sizeright];
	for (int i = 0; i < sizeleft; i++)
		leftarr[i] = arr[left + i];
	for (int i = 0; i < sizeright; i++)
		rightarr[i] = arr[middle + 1 + i];
	int fromleft = 0, fromright = 0, newid = left;
	while ((fromleft < sizeleft) && (fromright < sizeright))
	{
		if (leftarr[fromleft] <= rightarr[fromright]) 
		{
			arr[newid] = leftarr[fromleft];
			fromleft++;
		}
		else 
		{
			arr[newid] = rightarr[fromright];
			fromright++;
		}
		newid++;
	}
	while (fromleft < sizeleft) 
	{
		arr[newid] = leftarr[fromleft];
		fromleft++;
		newid++;
	}
	while (fromright < sizeright) 
	{
		arr[newid] = rightarr[fromright];
		fromright++;
		newid++;
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
		merge(arr, left, middle, right);
	}
}


template <>
void merge(char** arr, int left, int middle, int right) 
{
	int sizeleft = middle - left + 1, sizeright = right - middle;
	char** lefrarr = new char* [sizeleft];
	char** rightarr = new char* [sizeright];
	for (int i = 0; i < sizeleft; i++)
		lefrarr[i] = arr[left + i];
	for (int i = 0; i < sizeright; i++)
		rightarr[i] = arr[middle + 1 + i];
	int fromleft = 0, fromright = 0, newid = left;
	while ((fromleft < sizeleft) && (fromright < sizeright))
	{
		if (strlen(lefrarr[fromleft]) < strlen(rightarr[fromright]))
		{
			arr[newid] = lefrarr[fromleft];
			fromleft++;
		}
		else 
		{
			arr[newid] = rightarr[fromright];
			fromright++;
		}
		newid++;
	}
	while (fromleft < sizeleft) 
	{
		arr[newid] = lefrarr[fromleft];
		fromleft++;
		newid++;
	}
	while (fromright < sizeright) 
	{
		arr[newid] = rightarr[fromright];
		fromright++;
		newid++;
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
		merge(arr, left, middle, right);
	}
}

template <typename T>
void msort(T* arr, int size)
{
	descent(arr, 0, size-1);
}

#endif