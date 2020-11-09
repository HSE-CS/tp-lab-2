#include <iostream>
#include <task2.h>

using namespace std;

template<class T>
T gen() {
    static int t = 1;
    return t++;
}

int main()
{
    const size_t n = 5;
    int* arr = createArr<int, n>(gen);
    for (size_t i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
} 