#include "task3.h"

template <typename T> T change(T val)
{
	return val + 2;
}

int main()
{
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	map<int, n>(arr, change);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	

}