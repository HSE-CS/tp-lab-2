#include "task1.h"
#include <iostream>
//Написать шаблонную функцию msort, сортирующую массив элементов T слиянием.
//Если тип элемента массива char*, то производится сортировка по длине строк.

int main ()
{

    const size_t n = 6;
    //test 1
    int *val1 = new int[n]{5, 3, 2, 4, 1, 6};

    msort(val1, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << val1[i] << ' ';
    }
    std::cout << "\n";
    delete[] val1;


}
