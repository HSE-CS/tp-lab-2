#include "task1.h"


int main()
{
    const size_t n = 6;

    int *curr = new int[n]{6, 4, 3 ,2, 11, 21};
    msort(curr, n);

    for(size_t i = 0; i < n; i++) cout << curr[i] << '\n';

    return 0;
}
