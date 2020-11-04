#include <iostream>
#include "task3.h"
//Написать шаблонную функцию map, принимающую по ссылке массив элементов типа T и выполняющую преобразование
// каждого элемента в соответетствии с шаблонной функцией change, указатель на которую передается в map.



//test 1
int main()
{
    const size_t n = 5;
    int arr1[n]{1, 2, 3, 4, 5};
    map<int, n>(arr1, changed);
    for(int i : arr1)
        std::cout << i << ' ';

    //int expected[n]{2, 3, 4, 5, 6};

}