#include "task1.h"

int main()
{
    const size_t n = 6;
	int *val = new int[n]{5, 3, 2, 4, 1, 6};
	msort(val, n);
    for(size_t i = 0; i<n; i++)
    {
        std::cout << val[i];
    }
}