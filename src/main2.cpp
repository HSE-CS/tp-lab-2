#include"task2.h"

int main() {
	char* A;
	A = createArr<char, 5>(gen);
	for (size_t i = 0; i < 5; i++) {
		cout << A[i] << ' ';
	}
	cout << endl;

	int* I;
	I = createArr<int, 5>(gen);
	for (size_t i = 0; i < 5; i++) {
		cout << I[i] << ' ';
	}
	cout << endl;
	return 0;
}