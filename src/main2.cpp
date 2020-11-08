#include "task.h"


#include <cstddef>
#include <iostream>

using std::size_t;

size_t fibonacci_generator()
{
	static size_t F_curr = 0;
	static size_t F_next = 1;
	const size_t sum = F_curr + F_next;
	const size_t number = F_curr;
	F_curr = F_next;
	F_next = sum;
	return number;
}

template <typename T, T Start, T Step>
T arithmetic_progression()
{
	static T val = Start;
	const T tmp = val;
	val += Step;
	return tmp;
}

int main()
{
	{
		const size_t count = 13;
		std::cout << "Fibonacci sequence (" << count << " elements):" << std::endl;
		const auto arr = createArr<size_t, count>(fibonacci_generator);
		for (int i = 0; i < count; ++i)
		{
			std::cout << arr[i];
			if (i < count - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
		delete[] arr;
	}

	{
		const size_t count = 15;
		const size_t start = 3;
		const size_t end = 5;
		std::cout << "Arithmetic progression (" << count << " elements):" << std::endl;
		const auto arr = createArr<size_t, count>(arithmetic_progression<size_t, start, end>);
		for (int i = 0; i < count; ++i)
		{
			std::cout << arr[i];
			if (i < count - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
		delete[] arr;
	}

	return 0;
}
