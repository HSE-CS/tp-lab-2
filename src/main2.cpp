#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main()
{
	const size_t n = 10;
	int* arr;
	arr = createArr<int, n>(rand);


	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << endl;;
	}

	return 0;
}


