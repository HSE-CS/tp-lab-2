//
// Created by Vadim Makarov on 02.11.2020.
//

#include <iostream>
#include <cstring>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

int main(){

    /*const size_t n = 5;
     int* arr;
     arr = createArr<int, n>(gen);
     for (int i = 0; i < n; ++i) {
         cout << arr[i] << "  ";
     };*/

    /*const size_t n = 5;
    char* arr;
    arr = createArr<char, n>(gen);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    };*/

    const size_t n = 5;

    char** arr;
    arr = createArr<char*, n>(gen);

    char** expected = new char*[n];

    for(size_t i = 0; i < n; i++)
    {
        expected[i] = new char[i + 2];
        for(size_t j = 0; j < i + 1; j++)
            expected[i][j] = '0' + j;
        expected[i][i + 1] = '\0';
    }

    for (int i = 0; i < n; ++i) {
        cout << expected[i] << "  ";
    }
    cout << "\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    }

    delete[] arr;
    delete[] expected;
}


