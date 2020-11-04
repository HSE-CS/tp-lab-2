#include <iostream>
#include "task3.h"
//Написать шаблонную функцию map, принимающую по ссылке массив элементов типа T и выполняющую преобразование
// каждого элемента в соответетствии с шаблонной функцией change, указатель на которую передается в map.



//test 1
int main()
{
    const size_t n = 5;
    int arr1[n]{1, 2, 3, 4, 5};
    map<int, n>(arr1, change);

    double arr2[n]{1, 2.2, 3.3, 4.4, 5};
    map<double, n>(arr2, change);

    char arr3[n]{'1', '2', '3', '4', '5'};
    map<char, n>(arr3, change);

    char* arr4[n];
    for(size_t i = 0; i < n; i++)
    {
        arr4[i] = new char[i + 2];
        for(size_t j = 0; j < i + 1; j++)
        {
            arr4[i][j] = '0' + i;
        }
        arr4[i][i + 1] = '\0';
    }

    map<char*, n>(arr4, change);

    for(size_t i = 0; i < n; i++)
    {
        delete[] arr4[i];
    }

    //int expected[n]{2, 3, 4, 5, 6};
    //double expected[n]{2, 3.2, 4.3, 5.4, 6};
    //char expected[n]{'2', '3', '4', '5', '6'};
    //1 22 333 4444 55555

}