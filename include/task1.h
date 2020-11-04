#ifndef TASK1_H
#define TASK1_H
#include <cstring>

template <typename T> T* merge(T* arr1, T* arr2, size_t size1, size_t size2) {
	T* res = new T[size1 + size2]{ 0 };
	int res_ind = 0;

	while (size1 && size2)
	{
		if (*arr1 < *arr2)
		{
			res[res_ind] = *arr1;
			++arr1;
			--size1;
		}
		else
		{
			res[res_ind] = *arr2;
			++arr2;
			--size2;
		}
		++res_ind;
	}

	if (size1 == 0) {
		for (size_t i = 0; i < size2; ++i)
		{
			res[res_ind++] = *arr2++;
		}
	}
	else {
		for (size_t i = 0; i < size1; ++i)
		{
			res[res_ind++] = *arr1++;
		}
	}
	return res;
}
template<> char** merge<char*>(char** arr1, char** arr2, size_t size1, size_t size2) {
	char** res = new char* [size1 + size2];
	for (size_t i = 0; i < size1 + size2; i++)
	{
		res[i] = new char[20];
	}
	int res_ind = 0;

	while (size1 && size2)
	{
		if (strlen(*arr1) < strlen(*arr2))
		{
			res[res_ind] = *arr1;
			++arr1;
			--size1;
		}
		else
		{
			res[res_ind] = *arr2;
			++arr2;
			--size2;
		}
		++res_ind;
	}

	if (size1 == 0) {
		for (size_t i = 0; i < size2; ++i)
		{
			res[res_ind++] = *arr2++;
		}
	}
	else {
		for (size_t i = 0; i < size1; ++i)
		{
			res[res_ind++] = *arr1++;
		}
	}
	return res;
}

template <typename T> void msort(T* arr, size_t size) {
	size_t size1 = 1, left, size2;
	T* arr1;
	while (size1 < size)
	{
		left = 0;
		while (left < size) {
			if (left + size1 >= size)
			{
				break;
			}
			size2 = (left + 2 * size1 > size) ? (size - (left + size1)) : size1;
			arr1 = merge(arr + left, arr + left + size1, size1, size2);
			for (size_t i = 0; i < size1 + size2; ++i)
			{
				arr[left + i] = arr1[i];
			}
			delete[] arr1;
			left += size1 * 2;
		}
		size1 *= 2;
	}
}
template<> void msort<char*>(char** arr, size_t size) {
	size_t size1 = 1, left, size2;
	char** arr1;
	while (size1 < size)
	{
		left = 0;
		while (left < size) {
			if (left + size1 >= size)
			{
				break;
			}
			size2 = (left + 2 * size1 > size) ? (size - (left + size1)) : size1;
			arr1 = merge<char*>(arr + left, arr + left + size1, size1, size2);
			for (size_t i = 0; i < size1 + size2; ++i)
			{
				arr[left + i] = arr1[i];
			}
			delete[] arr1;
			left += size1 * 2;
		}
		size1 *= 2;
	}
}

#endif






