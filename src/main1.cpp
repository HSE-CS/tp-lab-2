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
	msort(a,comp2);
	for(int i = 0; i < 8; i++)
	{
		std :: cout << a[i] << std :: endl;
	}
	
	std :: string b[] = {"aaa","a","aaaaaaaa","aaaa"};
	msort(b,comp);
	for(int i = 0; i < 4; i++)
	{
		std::cout << b[i] << std :: endl;
	}
}
