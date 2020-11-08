#include "task3.h"

#include <iostream>

template <typename T>
void change(T& elem)
{
	elem /= 3.0;
}

int main()
{
	{
		std::cout << "Division by 3" << std::endl;
		const size_t count = 5;
		double arr[count] = { 1, 2.5, 3, 4, -99999.9 };
		std::cout << "Initial array:" << std::endl;
		for (int i = 0; i < count; ++i)
		{
			std::cout << arr[i];
			if (i < count - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;

		map(arr, 5, change);

		std::cout << "Transformed array:" << std::endl;
		for (int i = 0; i < count; ++i)
		{
			std::cout << arr[i];
			if (i < count - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
	}

	return 0;
}
