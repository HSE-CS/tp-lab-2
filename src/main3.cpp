#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include "task3.h"
int change(int a)
{
	return a *a;
}
int main()
{
	int arr [] = {1,2,3,4,5,6};
	map(arr,change);
	for(int i = 0; i < 6; i++)
	{
		std :: cout << arr[i] << std :: endl;
	}
}