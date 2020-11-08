#include<iostream>
#include "task1.h"
using namespace std;
int main() {
	int a[]{ 15, 4, 6, 9, 3, 1};
	msort(a, 6);
	for (size_t i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	double b[]{ 2.1, 4.5, 1.3, 21.4, 12., 4.9 };
	msort(b, 6);
	for (size_t i = 0; i < 6; i++) {
		cout << b[i] << " ";
	}
	cout << "\n";
	char* c[6]{ (char*)"a", (char*)"aa", (char*)"ab", (char*)"abc", (char*)"cc", (char*)"x" };
	msort(c, 6);
	for (size_t i = 0; i < 6; i++) {
		cout << c[i] << " ";
	}
	return 0;
}