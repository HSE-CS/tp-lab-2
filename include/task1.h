#pragma once
#include<iostream>


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




template< typename T >
void m_sort(T* mas, size_t l, size_t r)
{
	size_t m = l + (r - l) / 2;
	size_t t = 0;

	if (l < r)
	{
		if (r == l + 1)
		{

			if (mas[l] > mas[r])
				t = mas[l];
			mas[l] = mas[r];
			mas[r] = t;

		}
		else
		{

			m_sort(mas, l, m);
			m_sort(mas, m + 1, r);
			merge(mas, l, r);

		}






	}


}

