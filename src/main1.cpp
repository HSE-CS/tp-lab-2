#include "task1.h"

#include <iostream>
#include <string>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <utility>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>

template <typename T>
void process_and_print(std::vector<T> v)
{
	std::cout << "Исходный вектор: ";
	for (const auto& el : v)
		std::cout << el << " ";
	std::cout << std::endl;
	msort(v);
	std::cout << "Отсортированный вектор: ";
	for (const auto& el : v)
		std::cout << el << " ";
	std::cout << std::endl;
}

int main()
{
	{
		std::vector<int> v{ 1, 5, 7, 3, 2, 312 };
		process_and_print(v);
	}

	{
		std::vector<double> v{ 5.0, -31.5, -31.4, 31.5 };
		process_and_print(v);
	}

	{
		std::vector<char*> v;
		v.emplace_back(const_cast<char*>("abc"));
		v.emplace_back(const_cast<char*>("b1"));
		v.emplace_back(const_cast<char*>("asgjhasjdv"));
		process_and_print(v);
	}
	return 0;
}
