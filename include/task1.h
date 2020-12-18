#pragma once
#include<iostream>

#include<cstring>

template < typename T >
void merge(T merged[], size_t l_D, T L[], int l_L, T R[], int l_R) 
{
	int i = 0;
	int j = 0;

	while (i < l_L || j < l_R) 
	{

		if (i < l_L && j < l_R) 
		{
			if (L[i] <= R[j]) 
			{
				merged[i + j] = L[i];
				i++;
			}
			else 
			{
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < l_L)
		{
			merged[i + j] = L[i];
			i++;
		}
		else if (j < l_R) 
		{
			merged[i + j] = R[j];
			j++;
		}
	}

}


template<>
void merge(char** merged, size_t lenD, char** L, int l_L, char** R, int l_R)
{
	size_t i = 0;
	size_t j = 0;

	while (i < l_L || j < l_R)
	{

		if (i < l_L && j < l_R) 
		{
			if (strlen(L[i]) <= strlen(R[j])) 
			{
				merged[i + j] = L[i];
				i++;
			}
			else
			{
				merged[i + j] = R[j];
				j++;
			}
		}
		else if (i < l_L) 
		{
			merged[i + j] = L[i];
			i++;
		}
		else if (j < l_R) 
		{
			merged[i + j] = R[j];
			j++;
		}
	}
}

template < typename T >
void nsort(T inf[], size_t l_D)
{
	if (l_D > 1) 
	{
		int mid = l_D / 2;
		int re = l_D - mid;
		T* L = new T[mid];
		T* R = new T[re];
		for (int i = 0; i < l_D; i++)
		{
			if (i < mid)
			{
				L[i] = inf[i];
			}
			else 
			{
				R[i - mid] = inf[i];
			}
		}
		msort(L, mid);
		msort(R, re);
		merge(inf, l_D, L, mid, R, re);
	}
}
template <>
void nsort(char** inf, size_t l_D)
{

	if (l_D > 1) 
	{
		int mid = l_D / 2;
		int re = l_D - mid;

		char** L = new char*[mid];
		char** R = new char*[re];
		for (int i = 0; i < l_D; i++) 
		{
			if (i < mid)
			{
				L[i] = inf[i];
			}
			else 
			{
				R[i - mid] = inf[i];
			}
		}
		msort(L, mid);
		msort(R, re);
		merge(inf, l_D, L, mid, R, re);
	}



}
