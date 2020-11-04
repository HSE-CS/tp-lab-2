#include <iostream>
#include "task1.h"

using namespace std;

int main() {
	const size_t n = 10;
	int val[n]{ 100, 8, -5, -2, 0, 9, 0, 100, -7, -5 };
	msort(val, n);
	for (size_t i = 0; i < n; i++) {
		cout << val[i] << ' ';
	}
}
