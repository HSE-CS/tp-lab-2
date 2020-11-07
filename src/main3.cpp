#include "task3.h"

template <typename T> T change(T value)
{
    return value * value;
}

int main()
{
    const size_t n = 5;
    int array[n]{5, 3, 2, 4, 6};
    map <int, n> (array, change);
    
    for(int i = 0; i < n; i++) std::cout << array[i] << ' ';

    return 0;
}