#include <iostream>
#include "task2.h"

using namespace std;



int main()
{
    const size_t s =100;
    auto *array = createArr<double, s>(func);
    for (int i = 0; i < s; ++i)
    {
        cout << array[i] << endl;
    }
    return 0;
}
