#include "task1.h"
#include "task2.h"
#include "task3.h"
#include <iostream>
#include <typeinfo>

int gen() {
	int num = 0;
	std::cin >> num;
	return num;
}

int main() {
	int* mas = createArr<int, 5>(&gen);
	for (int i = 0; i < 5; ++i) {
		std::cout << mas[i] << " ";
	}
}
