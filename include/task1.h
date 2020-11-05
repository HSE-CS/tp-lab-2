#include <iostream>
#include <cstring>

template <typename T>
void merge(T* array, size_t left, size_t middle, size_t right)
{
	size_t len_left = middle - left + 1;
	size_t len_right = right - middle;
 
	T* Left = new T[len_left];
	T* Right = new T[len_right];

	for (size_t i = 0; i < len_left; i++)
		Left[i] = array[left + i];

	for (size_t j = 0; j < len_right; j++)
		Right[j] = array[middle + 1 + j];

	size_t ind_Left = 0, ind_Right = 0;

	size_t ind_Array = left;

	while (ind_Left < len_left && ind_Right < len_right)
	{
		if (Left[ind_Left] < Right[ind_Right])
		{
			array[ind_Array] = Left[ind_Left];
			ind_Left++;
		}
		else
		{
			array[ind_Array] = Right[ind_Right];
			ind_Right++;
		}
		ind_Array++;
	}

	while (ind_Left < len_left)
	{
		array[ind_Array] = Left[ind_Left];
		ind_Left++;
		ind_Array++;
	}

	while (ind_Right < len_right)
	{
		array[ind_Array] = Right[ind_Right];
		ind_Right++;
		ind_Array++;
	}
}


template<>
void merge(char ** array, size_t left, size_t middle, size_t right)
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
	{
		if (strlen(Left[ind_Left]) < strlen(Right[ind_Right]))
		{
			array[ind_Array] = Left[ind_Left];
			ind_Left++;
		}
		else
		{
			array[ind_Array] = Right[ind_Right];
			ind_Right++;
		}
		ind_Array++;
	}

	while (ind_Left < len_left)
	{
		array[ind_Array] = Left[ind_Left];
		ind_Left++;
		ind_Array++;
	}

	while (ind_Right < len_right)
	{
		array[ind_Array] = Right[ind_Right];
		ind_Right++;
		ind_Array++;
	}
}


template <typename T>
void msort(T* array, size_t size, size_t left = 0, size_t right = 0)
{
	if (size != 0) {
		right = size - 1;
	}

	if (left < right)
	{
		size_t middle = left + (right - left) / 2;

		msort(array, 0, left, middle);
		msort(array, 0,  middle + 1, right);

		merge(array, left, middle, right);
	}
}


template <>
void msort(char** array, size_t size, size_t left, size_t right)
{
	if (size != 0) {
		right = size - 1;
	}

	if (left < right)
	{
		size_t middle = left + (right - left) / 2;

		msort(array, 0, left, middle);
		msort(array, 0, middle + 1, right);

		merge(array, left, middle, right);
	}
}
