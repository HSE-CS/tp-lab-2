#include "task1.h"

int main()
{
	const int N = 8;
	float arr[N]={ 2.5, 7.1, 0.0 , 1.3, 2.4 , 2.6, 5.0, 1.1 };
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";
	cout << endl;
	msort(arr, N);
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";

	/*char* arr[N]{(char*)"aaa", (char*)"bbbb", (char*)"c", (char*)"dd", (char*)"ee", (char*)"rrrr", (char*)"qqq", (char*)"sssssss"};
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";
	cout<<endl;
	msort(arr, N);
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";*/
	return 0;
}