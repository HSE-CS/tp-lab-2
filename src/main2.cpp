#include <iostream>
#include <cstdlib>
#include "task2.h"
#define N 15
using namespace std;

template<typename T>
T gen()
{
	return rand() % (10 + 1);
}

int main()
{
    auto arr = createArr<int, N>(gen);

    for (int i = 0; i < N ; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

	return 0;
}