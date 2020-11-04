#include <iostream>
#include "task2.h"
//Написать шаблонную функцию createArr, создающую динамический массив элементов типа T размером N.
//Каждый элемент массива возвращается внешней шаблонной функцией gen, указатель на которую принимает функция createArr.


int main()
{
    const size_t n = 5;

    //test 1
    int * arr1 = createArr<int, n>(gen);
    //test 2
    char* arr2 = createArr<char, n>(gen);
    //test 3
    char** arr3 = createArr<char*, n>(gen);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}

    //int *expected = new int[n]{48, 49, 50, 51, 52};
    //char *expected = new char[n]{48, 49, 50, 51, 52};

    /*const size_t n = 5;
    char** arr3 = createArr<char*, n>(gen);

    char** expected = new char*[n];
    for(size_t i = 0; i < n; i++)
    {
        expected[i] = new char[i + 2];

        for(size_t j = 0; j < i + 1; j++)
            expected[i][j] = '0' + j;

        expected[i][i + 1] = '\0';


        for(size_t i = 0; i < n; i++)
        {
            EXPECT_EQ(strlen(expected[i]), strlen(arr[i]));
            if (strcmp(expected[i], arr[i]))
                for(size_t j = 0; j <= strlen(expected[i]); j++)
                    EXPECT_EQ(expected[j], arr[j]);
        }

        for(size_t i = 0; i < n; i++)
        {
            delete[] arr[i];
            delete[] expected[i];
        }

        delete[] arr;
        delete[] expected;

    }
*/

