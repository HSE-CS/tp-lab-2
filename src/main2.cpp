#include "task2.h"



int main()
{
    const size_t n = 5;
	int* arr;
	arr = createArr<int, n>(rand_int_mod_2020);
    for (int i = 0; i < n ; i++ )
        std::cout << arr[i] << " ";
    return 0;
}