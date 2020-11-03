#include "task1.h"
#include <iostream>
//Написать шаблонную функцию msort, сортирующую массив элементов T слиянием.
//Если тип элемента массива char*, то производится сортировка по длине строк.

#define t1

#ifdef t1
//test 1
int main ()
{
    const size_t n = 6;
    int *val = new int[n]{5, 3, 2, 4, 1, 6};
    //lab2::msort(val, n);
    //int *expected = new int[n]{1, 2, 3, 4, 5, 6};
    msort(val, n);


            //for(size_t i = 0; i < n; i++)
        //EXPECT_EQ(expected[i], val[i]);
    delete[] val;
    //delete[] expected;

}
#endif

#ifdef t2
//test 2
int main()
{
    const size_t n = 6;
    double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    lab2::msort(val, n);
    double expected[n]{-1, 2.1, 2.4, 2.5, 3.0, 4.0};

    for(size_t i = 0; i < n; i++)
        EXPECT_EQ(expected[i], val[i]);
}

#endif


#ifdef t3
//test 3
int main()
{
    const size_t n = 6;
    char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    lab2::msort(val, n);
    char* expected[n]{(char*)"f", (char*)"ff", (char*)"vvv", (char*)"fff2", (char*)"ffff", (char*)"fffrr"};

    for(size_t i = 0; i < n; i++)
        EXPECT_EQ(expected[i], val[i]);
}

#endif