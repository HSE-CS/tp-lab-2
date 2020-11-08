#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>
#include "task1.h"

using namespace std;

int main()
{
	vector <double> arr{ 1.2,5.5,8.6,9.,2.9 };
	for (size_t i = 0; i < arr.size(); ++i)
		cout << arr[i] <<' ';
	cout << endl;
	msort(arr, 0, arr.size());
	for (auto i : arr)
		cout << i << ' ';
	cout << endl;
	vector <char *> arr_str{ (char*)"a",(char*)"abc",(char*)"ab" };
	for (auto i : arr_str)
		cout << i << ' ';
	cout << endl;
	msort(arr_str, 0, arr_str.size());
	for (auto i : arr_str)
		cout << i << ' ';
	cout << endl;
}