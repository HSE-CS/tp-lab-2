//
// Created by sharg on 03.11.2020.
//


#include "task2.h"
using namespace std;

template <typename T>
T gen()
{
    static double t = 1.23;
    return t*=2;
}
int main() {

    const size_t size = 11;
    double *array;
    array = createArr<double , size>(gen);
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    return 0;
}