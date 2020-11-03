#include <iostream>
#include "task3.h"


int change(int num)
{
	return num * num;
}

char* change1(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main()
{
	const unsigned int size = 5;
	char str1[10]{ 'h', 'e', '\0' };
	char str2[10]{ 'l', 'l', 'o', '\0' };
	char str3[10]{ 'w', 'o', 'r', 'l' , 'd', '\0' };
	char str4[10]{ 'i', '\0' };
	char str5[10]{ 'a', 'm', '\0' };
	char* arr[size] {str1, str2, str3, str4, str5};
	
	map<char*, size>(arr, change1);

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	return 0;
}