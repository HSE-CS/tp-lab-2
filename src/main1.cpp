#include "task1.h"

int main()
{
	const int N = 8;
	float arr[N]={ 2.5, 7.1, 0.0 , 1.3, 2.4 , 2.6, 5.0, 1.1 };
	msort(arr, N);

	/*const int N = 8;
	char* arr[N]{(char*)"aaa", (char*)"bbbb", (char*)"c", (char*)"dd", (char*)"ee", (char*)"rrrr", (char*)"qqq", (char*)"sssssss"};
	msort(arr, N);*/
	return 0;
}