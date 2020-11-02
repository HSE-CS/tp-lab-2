#include <iostream>
#include <cstring>
#include <string>
#include "task1.h"

int main()
{
        const size_t n = 6;
	int *val = new int[n]{5, 3, 2, 4, 1, 6};
	msort(val,6);

	for(int i = 0; i < 6; i++)
	{
		std :: cout << val[i] << std::endl;
	}/*
	char *c[10 * sizeof(char*)];
 	for(int i = 0; i < 10;i++)
  		c[i] = (char*)calloc(100,sizeof(char));*/
	
	char* b[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
	msort(b,6);
	for(int i = 0; i < 6; i++)
	{
		std::cout << b[i] << std :: endl;
	}
}
