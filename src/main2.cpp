#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task2.h"

using namespace std;

template<class T>
T gen()
{
	static int t = 0;
	return t++;
}
int main() {
	const size_t a = 5;
	int* arr;
	arr = createArr<int, a>(gen);
	for (size_t i = 0; i < a; ++i) {
		cout << arr[i] << endl;
	}
	return 0;
}