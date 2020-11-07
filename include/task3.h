#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;
template<typename T, size_t size>
T *map(T a[],T (*change)(T)) {
    for (size_t i = 0; i < size; i++)
        a[i] = change(a[i]);

}