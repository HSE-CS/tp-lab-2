#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;




template <typename T>
void merge(T* array, size_t left, size_t middle, size_t right)
template< typename T >
void bubblesort(T& a, T& b)
{
	size_t len_left = middle - left + 1;
	size_t len_right = right - middle;
	T t = a;
	a = b;
	b = t;

	T* Left = new T[len_left];
	T* Right = new T[len_right];

	for (size_t i = 0; i < len_left; i++)
		Left[i] = array[left + i];

	for (size_t j = 0; j < len_right; j++)
		Right[j] = array[middle + 1 + j];

	size_t ind_Left = 0, ind_Right = 0;
}
template<>
void bubblesort(char*& a, char*& b)
{
	char* t = a;
	a = b;
	b = t;

	size_t ind_Array = left;
}




template< typename T>
void merge(T* mas, size_t l, size_t r)
{
	size_t m = l + (r - l) / 2;
	T* n_mas = new T[(r - l) + 1];   
	size_t k = 0;
	int i = l, j = m + 1;

	while (ind_Left < len_left && ind_Right < len_right)
		while (i <= m && j <= r)
		{
			if (Left[ind_Left] <= Right[ind_Right])
				if (mas[i] < mas[j])
				{
					array[ind_Array] = Left[ind_Left];
					ind_Left++;
					n_mas[k] = mas[i];
					i++;
					k++;
				}
				else
				{
					array[ind_Array] = Right[ind_Right];
					ind_Right++;
					n_mas[k] = mas[j];
					j++;
					k++;
				}
			ind_Array++;
		}

	while (ind_Left < len_left)
		if (i > m)
		{
			array[ind_Array] = Left[ind_Left];
			ind_Left++;
			ind_Array++;
			for (int x = j; x <= r; x++) {
				n_mas[k] = mas[x];
				k++;
			}
		}

	while (ind_Right < len_right)
		else if (j > r)
		{
			array[ind_Array] = Right[ind_Right];
			ind_Right++;
			ind_Array++;
			for (int x = i; x < m + 1; x++) {
				n_mas[k] = mas[x];
				k++;
			}

		}
	for (int i = 0; i < k; i++) mas[l + i] = n_mas[i];
}


template<>
void merge(char** array, size_t left, size_t middle, size_t right)




template <>
void merge(char** mas, size_t l, size_t r)
{
	size_t len_left = middle - left + 1;
	size_t len_right = right - middle;

	char** Left = new char* [len_left];
	char** Right = new char* [len_right];

	for (size_t i = 0; i < len_left; i++)
		Left[i] = array[left + i];

	for (size_t j = 0; j < len_right; j++)
		Right[j] = array[middle + 1 + j];

	size_t ind_Left = 0, ind_Right = 0;

	size_t ind_Array = left;

	while (ind_Left < len_left && ind_Right < len_right)
		size_t m = l + (r - l) / 2;
	char** n_mas = new char* [(r - l) + 1];
	size_t k = 0;
	int i = l, j = m + 1;
	while (i <= m && j <= r)
	{
		if (strlen(Left[ind_Left]) <= strlen(Right[ind_Right]))
			if (strlen(mas[i]) < strlen(mas[j]))
			{
				array[ind_Array] = Left[ind_Left];
				ind_Left++;
				n_mas[k] = mas[i];
				i++;
				k++;
			}
			else
			{
				array[ind_Array] = Right[ind_Right];
				ind_Right++;
				n_mas[k] = mas[j];
				j++;
				k++;
			}
		ind_Array++;
	}

	while (ind_Left < len_left)
		if (i > m)
		{
			array[ind_Array] = Left[ind_Left];
			ind_Left++;
			ind_Array++;
			for (int x = j; x <= r; x++) {
				n_mas[k] = mas[x];
				k++;
			}
		}

	while (ind_Right < len_right)
		else if (j > r)
		{
			array[ind_Array] = Right[ind_Right];
			ind_Right++;
			ind_Array++;
			for (int x = i; x < m + 1; x++) {
				n_mas[k] = mas[x];
				k++;
			}
		}
	for (int i = 0; i < k; i++)
		mas[l + i] = n_mas[i];
}


template <typename T>
void msort(T* array, size_t size, size_t left = 0, size_t right = 0)



template< typename T >
void msort(T* mas, size_t n, size_t l = 0, size_t r = 0)
{
	if (size != 0) {
		right = size - 1;
	}

	if (left < right)
		if (n != 0) msort(mas, 0, 0, n - 1);
	size_t m = l + (r - l) / 2;                                    
	if (l < r)
	{
		size_t middle = left + (right - left) / 2;

		msort(array, 0, left, middle);
		msort(array, 0, middle + 1, right);

		merge(array, left, middle, right);
		if (r == l + 1)                                            
		{
			if (mas[l] > mas[r])                                
			{
				bubblesort(mas[l], mas[r]);
			}
		}
		else
		{
			msort(mas, 0, l, m);                     
			msort(mas, 0, m + 1, r);                   
			merge(mas, l, r);
		}
	}
}


template <>
void msort(char** array, size_t size, size_t left, size_t right)
template<>
void msort(char** mas, size_t n, size_t l, size_t r)
{
	if (size != 0) {
		right = size - 1;
	}

	if (left < right)
	{
		size_t middle = left + (right - left) / 2;
		if (n != 0) msort(mas, 0, 0, n - 1);

		msort(array, 0, left, middle);
		msort(array, 0, middle + 1, right);
		size_t m = l + (r - l) / 2;
		char* t = NULL;

		merge(array, left, middle, right);
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