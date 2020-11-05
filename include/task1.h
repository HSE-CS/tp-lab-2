#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <string.h>
using namespace std;

template <typename S>
bool compare(S a, S b)
{
	return a < b;
}
template<>
bool compare<char*>(char* a, char* b) 
{
	return strlen(a) < strlen(b);
}
template<>
bool compare<const char*>(const char* a,const char* b) 
{
	return strlen(a) < strlen(b);
}


template <typename T>
void msort(T arr[], int N) 
{
	if (N == 1)
		return;

	int l = N / 2;
	int r = N-l;
	msort(&arr[0], l);
	msort(&arr[l], r);

	T* result = new T[N];
	int k = 0;
	int il=0;
	int ir=l;
	while (il<l && ir < N)
	{
		if (compare(arr[il],arr[ir]))
		{
			result[k] = arr[il];
			il++;
		}
		else
		{
			result[k] = arr[ir];
			ir++;
		}
		k++;
	}
	while (il < l)
	{
		result[k] = arr[il];
		il++;
		k++;
	}
	while (ir < N)
	{
		result[k] = arr[ir];
		ir++;
		k++;
	}

	for (int i = 0; i < N; i++)
		arr[i] = result[i];

	delete[]result;
}

#endif 
