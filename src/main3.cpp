#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task3.h"

using namespace std;

	template<class T>
	T change(T val)
	{
		return val - 1;
	}

int main() {
    const size_t n = 5;
    int* arr = new int[n]{5,4,3,2,1};
    map<int, n>(arr, change);
    for (size_t i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
} 