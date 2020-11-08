#include "task1.h"
#include "task2.h"
#include "task3.h"
#include <iostream>
#include <typeinfo>
#include <cstring>

int generator() {
	int num = 0;
	std::cin >> num;
	return num;
}

int change(int a) {
	return a * 2 + 34;
}

int main() {
	/*int* mas = new int[5];
	for (int i = 0; i < 5; ++i) {
		std::cin >> mas[i];
	}
	map<int, 5>(mas, &change);

	for (int i = 0; i < 5; ++i) {
		std::cout << mas[i] << " ";
	}*/
	int a[3] = { 5,2,7 };

	char buf[100];
	char** mas2 = (char**)malloc(4 * sizeof(char));
	for (int i = 0; i < 4; ++i) {
		std::cin >> buf;
		mas2[i] = (char*)malloc((strlen(buf)+1) * sizeof(char));
		strcpy(mas2[i], buf);
	}
	msort(mas2, 4);

}
