#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <cstring>

using namespace std;

template <typename T> bool comp(T a, T b)
{
	return a < b;
}
template <> bool comp<char *>(char * a, char * b)
{
	return strlen(a) < strlen(b);
}


template <class T> void msort(T(*arr), const size_t n)
{
	if (n > 1)
	{
		const size_t left_n = n / 2;
		T *left_arr = new T[left_n];
		for (size_t i = 0; i < left_n; i++)
			left_arr[i] = arr[i];
		msort(left_arr, left_n);

		const size_t right_n = n - left_n;
		T *right_arr = new T[right_n];
		for (size_t i = 0; i < right_n; i++)
			right_arr[i] = arr[left_n + i];
		msort(right_arr, right_n);

		for (size_t i = 0, left_i = 0, right_i = 0; i < n; i++)
		{

			if ((left_i < left_n) && (right_i < right_n) && comp(left_arr[left_i], right_arr[right_i]) || !(right_i < right_n))
			{
				arr[i] = left_arr[left_i];
				left_i++;
			}

			else
			{
				arr[i] = right_arr[right_i];
				right_i++;
			}

		}

	}
}

