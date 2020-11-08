#include "task3.h"
#include <iostream>

template <typename T>
T change(T elem)
{
	return elem / 3.0;
}

int main()
{
	{
		std::cout << "Division by 3" << std::endl;
		const unsigned long count = 5;
		double arr[count]{ 1, 2.5, 3, 4, -99999.9 };
		std::cout << "Initial array:" << std::endl;
		for (int i = 0; i < count; ++i)
		{
			std::cout << arr[i];
			if (i < count - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;

		map<double, count>(arr, change);

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
