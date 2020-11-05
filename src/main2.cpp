#include "task2.h"

int generator() {
	int a = 0;
	cin >> a;
	return a;
}

int main() {
	int* Arr= createArr<int, 5>(&generator);
	for (int i = 0; i < 5; ++i) {
		cout << Arr[i]<<"\t";
	}
	return 0;
}