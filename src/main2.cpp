#include <iostream>
#include <time.h>
#include "task2.h"

#define S 10

int gen() {
	return rand() % sizeof(int);
}

int main(){
	srand(time(0));
	int* arr = createArr<int, S>(gen);
	for (int i = 0; i < S; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	return 0;
}
