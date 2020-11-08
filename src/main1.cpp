#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>
#include "task1.h"

using namespace std;

int main()
{
	int arr[5]{ 1.2,5.5,8.6,9.,2.9 };
	for (size_t i = 0; i < 5; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	msort(arr,5);
	for (auto i : arr)
		cout << i << ' ';
	cout << endl;
	char * arr_str[3]{ (char*)"a",(char*)"abc",(char*)"ab" };
	for (auto i : arr_str)
		cout << i << ' ';
	cout << endl;
	msort(arr_str,3);
	for (auto i : arr_str)
		cout << i << ' ';
	cout << endl;
}