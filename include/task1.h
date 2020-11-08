#pragma once

#include <cstring>
#include <vector>
#include <utility> 
#include <string>
using namespace std;
template <typename T>
bool sort_criteria(const T lhs, const T rhs)
{
	return lhs < rhs;
}

template <>
bool sort_criteria(char* lhs, char* rhs)
{
	return strlen(lhs) < strlen(rhs);
}

template <typename T>
void msort_impl(T* arr, size_t size)
{
	if (size > 1)
	{
		const auto left_size = size / 2;
		const auto right_size = size - left_size;

		msort_impl(arr, left_size);
		msort_impl(arr + left_size, right_size);

		size_t left_idx = 0;
		size_t right_idx = left_size;
		size_t idx = 0;

		auto tmp = new T[size];

		while (left_idx < left_size || right_idx < size)
		{
			if (sort_criteria(arr[left_idx], arr[right_idx]))
				tmp[idx++] = std::move(arr[left_idx++]);
			else
				tmp[idx++] = std::move(arr[right_idx++]);

			if (left_idx == left_size)
			{
				std::copy(std::make_move_iterator(&arr[right_idx]), std::make_move_iterator(&arr[size]), &tmp[idx]);
				break;
			}
			if (right_idx == size)
			{
				std::copy(std::make_move_iterator(&arr[left_idx]), std::make_move_iterator(&arr[left_size]), &tmp[idx]);
				break;
			}
		}
		std::copy(std::make_move_iterator(tmp), std::make_move_iterator(&tmp[size]), arr);

		delete[] tmp;
	}
}

template <typename T>
void msort(std::vector<T> &v)
{
	msort_impl(v.data(), v.size());
}
