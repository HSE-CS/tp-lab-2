#pragma once
#include<iostream>
#include<cstring>


template< typename T>
void merge(T* mas, size_t l, size_t r)
{

	size_t m = l + (r - l) / 2;
	T* n_mas = new T[(r-l)+1];
	size_t k = 0;

	int i = l, j = m + 1;

	while (i <= m && j <= r)
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

	for (int i = 0; i < k; i++)
		mas[l+i] = n_mas[i];


}

template <>
void merge(char** mas, size_t l, size_t r)
{
	size_t m = l + (r - l) / 2;
	char** n_mas = new char*[(r - l) + 1];
	size_t k = 0;

	int i = l, j = m + 1;

	while (i <= m && j <= r)
	{
		//if (strlen(mas[i]) == strlen(mas[j]))
		//{
		//	if ( strcmp(mas[i], mas[j]) > 0)

		//}

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




template< typename T >
void msort(T* mas, size_t n , size_t l = 0, size_t r = 0)
{
	if (n != 0) msort(mas, 0, 0, n - 1);

	size_t m = l + (r - l) / 2;
	size_t t = 0;

	if (l < r)
	{
		if (r == l + 1)
		{

			if (mas[l] > mas[r])
			{
				t = mas[l];
				mas[l] = mas[r];
				mas[r] = t;
			}
		}
		else
		{

			msort(mas,0, l, m);
			msort(mas, 0, m + 1, r);
			merge(mas, l, r);

		}






	}


}

template<>
void msort( char** mas, size_t n, size_t l, size_t r)
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
				t = mas[l];
				mas[l] = mas[r];
				mas[r] = t;
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

