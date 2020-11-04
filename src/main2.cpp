//
// Created by stoja on 03.11.2020.
//

#include "task2.h"
#include <iostream>

template<class T>
T gen()
{
    static int k = 48;
    return k++;
}

template<>
char* gen()
{
    static unsigned k = 0;
    k++;
    char* s = new char[k + 1];

    for (int i = 0; i < k; i++)
        s[i] = '0' + i;
    s[k] = '\0';

    return s;
}

int main(){

        const size_t n = 5;
        int* arr;
        arr = createArr<int, n>(gen);

        int* expected = new int[n] {48, 49, 50, 51, 52};

        for (int i = 0; i < n; i++)
            cout << expected[i] << " " << arr[i] << endl;
        delete[] arr;
        delete[] expected;

        char** arr3;
        arr3 = createArr<char*, n>(gen);

        char** expected3 = new char* [n];
        for (int i = 0; i < n; i++)
        {
            expected3[i] = new char[i + 2];
            for (int j = 0; j < i + 1; j++)
                expected3[i][j] = '0' + j;
            expected3[i][i + 1] = '\0';
        }

        for (int i = 0; i < n; i++)
        {
            cout << strlen(expected3[i]) << " " << strlen(arr3[i]) << endl;
            if (strcmp(expected3[i], arr3[i]))
                for (int j = 0; j <= strlen(expected3[i]); j++)
                    cout << expected3[j] << " " << arr3[j] << endl;
        }
        for (int i = 0; i < n; i++)
        {
            delete[] arr3[i];
            delete[] expected3[i];
        }

        delete[] arr3;
        delete[] expected3;
    return 0;
}