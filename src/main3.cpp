#include"task3.h"

int main() {
	int I[] = { 1, 2, 3, 4, 5 };
	map(I, change);
	for (size_t i = 0; i < 5; i++) {
		cout << I[i] << ' ';
	}
	cout << endl;
	return 0;
}