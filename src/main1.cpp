#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
    size_t n = 10;
    int *a = new int[n]{5, 3, 7, 1, 9, 2, 8, 6, 4, 0};
    msort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    const size_t m = 10;
    char* starray[m]{(char*)"Hello",(char*)"World",(char*)"I",(char*)"Am",(char*)"Mikhail",(char*)"Bekusov",(char*)"Create",(char*)"Msort",(char*)"Yes",(char*)"Win"};

    msort(starray, m);
    for (auto & i : starray)
        cout << i << "\n";
    return 0;
}
