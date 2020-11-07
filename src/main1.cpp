#include "task1.h"

int main()
{
    const size_t n = 4;
	int *val = new int[n]{7, 5, 3, 8};
	msort(val, n);
	for (size_t i = 0; i < n ; i++)
	    std::cout << val[i] << " ";
    std::cout << "\n";

    const size_t m = 5;
	char** str = new char*[m];
	str[0] = new char[7]{'P','L','E','A','S','E','\0'};
	str[1] = new char[5]{'W','O','R','K','\0'};
	str[2] = new char[3]{'M','Y','\0'};
	str[3] = new char[8]{'D','A', 'R', 'L', 'I', 'N', 'G', '\0'};
	
	msort(str, m);
	for (size_t i = 0; i < m ; i++)
	    std::cout << str[i] << "\n";
    return 0;
}