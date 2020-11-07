#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <iostream>
#include <cstdlib>
#include <cstring>


int main()
{
    int a[8];
    // Заполнение массива случайными числами
    for (int i = 0; i < 8; i++)
        a[i] = rand() % 20 - 10;

    char* val1[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
    // Вывод элементов массива до сортировки
    for (int i = 0; i < 6; i++)
        printf("%s ", val1[i]);
    printf("\n");
    msort(val1, 6); // вызов функции сортировки
    // Вывод элементов массива после сортировки
    for (int i = 0; i < 6; i++)
        printf("%s ", val1[i]);
    printf("\n");
    //getchar();
    return 0;
}