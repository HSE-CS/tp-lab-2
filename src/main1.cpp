#include <iostream>
#include "task1.h"

int main()
{
    const size_t n = 6;
	int *val = new int[n]{5, 3, 2, 4, 1, 6};
	msort(val, n);
	int *expected = new int[n]{1, 2, 3, 4, 5, 6};
    
    for(size_t i = 0; i < n; i++)
		std::cout << expected[i] << " " << val[i] << std::endl;
	delete[] val;
	delete[] expected;
    return 0;
}