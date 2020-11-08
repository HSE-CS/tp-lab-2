#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	auto a = createArr<int, 10>(gen);
	for (size_t i = 0; i < 10; ++i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	return 0;
}

