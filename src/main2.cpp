#include "task2.h"

using namespace std;

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

template<>
char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for (size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

int main() {
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen);

    int* expected = new int[n] {48, 49, 50, 51, 52};

    for (size_t i = 0; i < n; i++)
        cout << expected[i] << "-" << arr[i] << endl;
    delete[] arr;
    delete[] expected;

    char** arr3;
    arr3 = createArr<char*, n>(gen);

    char** expected3 = new char* [n];
    for (size_t i = 0; i < n; i++)
    {
        expected3[i] = new char[i + 2];
        for (size_t j = 0; j < i + 1; j++)
            expected3[i][j] = '0' + j;
        expected3[i][i + 1] = '\0';
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << strlen(expected3[i]) << "-" << strlen(arr3[i]) << endl;
        if (strcmp(expected3[i], arr3[i]))
            for (size_t j = 0; j <= strlen(expected3[i]); j++)
                cout << expected3[j] << "-" << arr3[j] << endl;
    }
    for (size_t i = 0; i < n; i++)
    {
        delete[] arr3[i];
        delete[] expected3[i];
    }

    delete[] arr3;
    delete[] expected3;

    return 0;
}