#include "task1.h"
#include "task2.h"
#include "task3.h"
#include <iostream>
#include <typeinfo>

int change(int a) {
	return a * 2;
}

int main() {
	int* mas = new int[5];
	map<int, 5>(mas, &change);
	for (int i = 0; i < 5; ++i) {
		std::cout << mas[i] << " ";
	}

}
