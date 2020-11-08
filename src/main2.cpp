#include "task2.h"

#include <iostream>

unsigned long fibonacci_generator()
{
	static unsigned long F_curr = 0;
	static unsigned long F_next = 1;
	const unsigned long sum = F_curr + F_next;
	const unsigned long number = F_curr;
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
		const unsigned long count = 13;
		std::cout << "Fibonacci sequence (" << count << " elements):" << std::endl;
		const auto arr = createArr<unsigned long, count>(fibonacci_generator);
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
		const unsigned long count = 15;
		const unsigned long start = 3;
		const unsigned long end = 5;
		std::cout << "Arithmetic progression (" << count << " elements):" << std::endl;
		const auto arr = createArr<unsigned long, count>(arithmetic_progression<unsigned long, start, end>);
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
