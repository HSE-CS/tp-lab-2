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
    delete[] val1;

    //test 2
    double val2[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val2, n);
    //double expected[n]{-1, 2.1, 2.4, 2.5, 3.0, 4.0};

    //test 3
    char* val3[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val3, n);
    //char* expected[n]{(char*)"f", (char*)"ff", (char*)"vvv", (char*)"fff2", (char*)"ffff", (char*)"fffrr"};

}
