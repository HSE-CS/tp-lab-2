#include "task3.h"

template<typename T>
int change(T a)
{
	return a * 10;
}

int main() 
{
	const int N = 8;
	int arr[N]{1, 2, 3, 4, 5, 6, 7, 8};
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";
	cout << endl;
	map<int, N>(arr, change);
	for (int i : arr) 
	{
		cout << i << "\t";
	}
	return 0;
}