#include <iostream>
#include "task2.h"
//Написать шаблонную функцию createArr, создающую динамический массив элементов типа T размером N.
//Каждый элемент массива возвращается внешней шаблонной функцией gen, указатель на которую принимает функция createArr.
int main()
{
    const size_t n = 5;

    //test 1
    int * arr1 = createArr<int, n>(gener);

    for (int i = 0; i < n; i++) {
        std::cout << arr1[i] << ' ';
    }
    delete[] arr1;

}

    //int *expected = new int[n]{48, 49, 50, 51, 52};

