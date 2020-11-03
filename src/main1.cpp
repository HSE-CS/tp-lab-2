#include <stdio.h>
#include <iostream>
#include "task1.h"
#include "task2.h"
template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

template<>
char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

template<class T>
T change(T val)
{
    return val + 1;
}

template<>
char* change(char* val)
{
    size_t n = strlen(val);
    for(size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}
int main()
{

    //int arr[100]{3,6,2,6,1};
    //msort(arr, 5);

    //for (int i = 0; i < 5; i++)
      //  std::cout << arr[i] << " ";

    char** array = createArr<char*, 5>(gen);

    for (int i = 0; i < 5; i++)
        std::cout << array[i] << " ";

}
