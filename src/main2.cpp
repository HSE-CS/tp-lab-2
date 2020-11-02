#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include "task2.h"
int gen()
{
	return rand()%20;
}
int main()
{
	int * arr = createArr<int,5>(gen);
	for(int i =0; i < 5; i++)
	{
		std::cout<<arr[i] << std :: endl;
	}
}
