#include "task3.h"

int changer(int a) {
	return a+5;
}

int main() {
	int* Arr = new int[5];
	for (int i = 0; i < 5; ++i) {
		cin >> Arr[i];

	}
	map<int, 5>(Arr, &changer);
	for (int i = 0; i < 5; ++i) {
		cout << Arr[i] << "\t";
	}
	return 0;
}