#include <iostream>
#include <cstring>
#include <string>
#include "task1.h"

int comp2(const  double a,const double b ) 
{
    return a - b;
}

int comp(const std :: string a , const std::string b)
{
	return a.length() - b.length();
}
int main()
{
	double a [] = {1.1,9.3,4.2,2.2,3.6,7.1,5.5,0};
	msort(a);
	for(int i = 0; i < 8; i++)
	{
		std :: cout << a[i] << std :: endl;
	}
	
	char**b = (char**)calloc(4,sizeof(char*));
	b[0] = "aaa";
	b[1] = "a";
	b[2] = "aaaaaaaaa";
	b[3] = "aaaa";
	msort(b,4);
	for(int i = 0; i < 4; i++)
	{
		std::cout << b[i] << std :: endl;
	}
}
