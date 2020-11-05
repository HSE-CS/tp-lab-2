#ifndef TASK1_H
#define TASK1_H
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;
///////////////////////////////////////////////

template< typename T >
void bubblesort(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;

}
template<>
void bubblesort(char*& a, char*& b)
{
	char* t = a;
	a = b;
	b = t;

}
////////////////////////////////////////////////////
template< typename T>
void merge(T* mas, size_t l, size_t r)
{
	size_t m = l + (r - l) / 2;
	T* n_mas = new T[(r - l) + 1];     //make new  mas
	size_t k = 0;
	int i = l, j = m + 1;

	while (i <= m && j <= r)            //add elements from left and right parts in ascending order
	{
		if (mas[i] < mas[j])
		{
			n_mas[k] = mas[i];
			i++;
			k++;
		}
		else
		{
			n_mas[k] = mas[j];
			j++;
			k++;
		}
	}
	if (i > m)
	{
		for (int x = j; x <= r; x++) {
			n_mas[k] = mas[x];
			k++;
		}
	}
	else if (j > r)
	{
		for (int x = i; x < m + 1; x++) {
			n_mas[k] = mas[x];
			k++;
		}

	}
	for (int i = 0; i < k; i++) mas[l + i] = n_mas[i];
}
                                                         //////////////////////////////////
template <>
void merge(char** mas, size_t l, size_t r)
{
	size_t m = l + (r - l) / 2;
	char** n_mas = new char* [(r - l) + 1];
	size_t k = 0;
	int i = l, j = m + 1;
	while (i <= m && j <= r)
	{
		if (strlen(mas[i]) < strlen(mas[j]))
		{
			n_mas[k] = mas[i];
			i++;
			k++;
		}
		else
		{
			n_mas[k] = mas[j];
			j++;
			k++;
		}
	}
	if (i > m)
	{
		for (int x = j; x <= r; x++) {
			n_mas[k] = mas[x];
			k++;
		}
	}
	else if (j > r)
	{
		for (int x = i; x < m + 1; x++) {
			n_mas[k] = mas[x];
			k++;
		}
	}
	for (int i = 0; i < k; i++)
		mas[l + i] = n_mas[i];
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template< typename T >
void msort(T* mas, size_t n, size_t l =0, size_t r =0)
{
	if (n != 0) msort(mas, 0, 0, n - 1);
	size_t m = l + (r - l) / 2;                                     //m-middle of mas
	if (l < r)
	{
		if (r == l + 1)                                             //pair of elements in mas
		{
			if (mas[l] > mas[r])                                //bobble sort
			{
				bubblesort(mas[l], mas[r]);
			}
		}
		else
		{
			msort(mas, 0, l, m);                           //from 1 element to middle
			msort(mas, 0, m + 1, r);                       // from middle to last element
			merge(mas, l, r);
		}
	}
}

template<>
void msort(char** mas, size_t n, size_t l, size_t r)
{
	if (n != 0) msort(mas, 0, 0, n - 1);

	size_t m = l + (r - l) / 2;
	char* t = NULL;

	if (l < r)
	{
		if (r == l + 1)
		{
			if (strlen(mas[l]) > strlen(mas[r]) || (strlen(mas[l]) == strlen(mas[r])))
			{
				bubblesort(mas[l], mas[r]);
			}
		}
		else
		{
			msort(mas, l, m);
			msort(mas, m + 1, r);
			merge(mas, l, r);
		}
	}
}
#endif TASK1_H