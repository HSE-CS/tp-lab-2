#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T> 
void msort(T* arr, int first, int last)
{
	if (first >= last)
		return;
	int mid = first + (last - first) / 2;
	msort(arr, first, mid);
	msort(arr, mid + 1, last);

	T* buf = (T*)malloc(sizeof(T) * (last - first + 1));

	int k = 0;
	int i = first;
	int j = mid + 1;

	while (k < last - first + 1)
	{
		if ((j > last) || ((i <= mid) && (arr[i] < arr[j])))
		{
			buf[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			buf[k] = arr[j];
			k++;
			j++;
		}
	}

	
	for (int h = 0; h < last - first + 1; h++)
		arr[first + h] = buf[h];

	free(buf);
}
	
template<> 
void msort<char*>(char** arr, int first, int last) 
{
	if (first >= last)
		return;
	int mid = first + (last - first) / 2;
	msort(arr, first, mid);
	msort(arr, mid + 1, last);

	char** buf = (char**)malloc(sizeof(char*) * (last - first + 1));
	for (int h = 0; h < last - first + 1; h++)
		buf[h] = (char*)malloc(sizeof(char));

	int s = 0;
	int i = first;
	int j = mid + 1;

	while (s < last - first + 1)
	{
		if ((j > last) || ((i <= mid) && (strlen(arr[i]) < strlen(arr[j]))))
		{
			buf[s] = arr[i];
			s++;
			i++;
		}
		else
		{
			buf[s] = arr[j];
			s++;
			j++;
		}
	}


	for (int h = 0; h < last - first + 1; h++)
		arr[first + h] = buf[h];

	for (int h = 0; h < last - first + 1; h++)
		free(buf);
}
#endif