#include <iostream>
#include "task2.h"
//Написать шаблонную функцию createArr, создающую динамический массив элементов типа T размером N.
//Каждый элемент массива возвращается внешней шаблонной функцией gen, указатель на которую принимает функция createArr.

#define t1

#ifdef t1

//test 1
int main()
{
    const size_t n = 5;
    int* arr;
    arr = lab2::createArr<int, n>(lab2::gen);

    int *expected = new int[n]{48, 49, 50, 51, 52};

    for(size_t i = 0; i < n; i++)
        EXPECT_EQ(expected[i], arr[i]);
    delete[] arr;
    delete[] expected;

}

#endif

#ifdef t2
//test 2
int main()
{
    const size_t n = 5;
char* arr;
arr = lab2::createArr<char, n>(lab2::gen);

char *expected = new char[n]{48, 49, 50, 51, 52};

for(size_t i = 0; i < n; i++)
EXPECT_EQ(expected[i], arr[i]);
delete[] arr;
delete[] expected;

}

#endif

#ifdef t3
//test 3
int main()
{
    const size_t n = 5;
char** arr;
arr = lab2::createArr<char*, n>(lab2::gen);

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
}

#endif