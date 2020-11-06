#include "task1.h"
#include "task2.h"
#include "task3.h"
#include <iostream>
#include <typeinfo>


int main() {
	int a[3] = { 5,2,7 };

	char buf[100];
	char** mas2 = (char**)malloc(4 * sizeof(char));
	for (int i = 0; i < 4; ++i) {
		std::cin >> buf;
		mas2[i] = (char*)malloc((strlen(buf)+1) * sizeof(char));
		strcpy(mas2[i], buf);
	}
	msort(mas2, 4);
	for (int i = 0; i < 4; ++i) {
		std::cout << mas2[i] << "\n";
	}

}