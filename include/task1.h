#include <iostream>
#include <string.h>


template <typename T>
bool compare(T a, T b) {
    return a < b;
}

template <> bool compare <char*> (char* a, char* b) {
    return strlen(a) < strlen(b);
}


template <typename T>
void msort(T* arr, size_t N)
{
	if (N > 1)
	{
		size_t center = N / 2;

		T* arr_1 = new T[center];
		T* arr_2 = new T[N - center];

		for (int i = 0; i < center; i++)
			arr_1[i] = arr[i];
		for (size_t i = 0; i < N - center; i++)
			arr_2[i] = arr[i + center];

		msort(arr_1, center);
		msort(arr_2, N - center);

		int  k = 0, i = 0, j = 0;

		while (i < center && j < N - center)
		{
			if (compare(arr_1[i], arr_2[j]))
			{
				arr[k] = arr_1[i];
				i++;
			}
			else
			{
				arr[k] = arr_2[j];
				j++;
			}
			k++;

		}

		while (i < center)
		{
			arr[k] = arr_1[i];
			i++;
			k++;
		}
		while (j < N - center)
		{
			arr[k] = arr_2[j];
			j++;
			k++;
		}

	}
}

