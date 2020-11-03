#include <iostream>
#include "task3.h"
//Написать шаблонную функцию map, принимающую по ссылке массив элементов типа T и выполняющую преобразование
// каждого элемента в соответетствии с шаблонной функцией change, указатель на которую передается в map.

#define t1

#ifdef t1
//test 1
int main()
{
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    lab2::map<int, n>(arr, lab2::change);

    int expected[n]{2, 3, 4, 5, 6};

    for(size_t i = 0; i < n; i++)
        EXPECT_EQ(expected[i], arr[i]);

}
#endif

#ifdef t2

//test 2
int main()
{
    const size_t n = 5;
double arr[5]{1, 2.2, 3.3, 4.4, 5};
lab2::map<double, n>(arr, lab2::change);

double expected[n]{2, 3.2, 4.3, 5.4, 6};

for(size_t i = 0; i < n; i++)
EXPECT_EQ(expected[i], arr[i]);

}
#endif

#ifdef t3

//test 3
int main()
{
    const size_t n = 5;
char arr[n]{'1', '2', '3', '4', '5'};
lab2::map<char, n>(arr, lab2::change);

char expected[n]{'2', '3', '4', '5', '6'};

for(size_t i = 0; i < n; i++)
EXPECT_EQ(expected[i], arr[i]);


}
#endif

#ifdef t4

//test 4
int main()
{
    const size_t n = 5;
char* arr[n];
char* expected[n];
for(size_t i = 0; i < n; i++)
{
arr[i] = new char[i + 2];
expected[i] = new char[i + 2];
for(size_t j = 0; j < i + 1; j++)
{
arr[i][j] = '0' + i;
expected[i][j] = '1' + i;
}
arr[i][i + 1] = '\0';
expected[i][i + 1] = '\0';
}
lab2::map<char*, n>(arr, lab2::change);

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

}
#endif