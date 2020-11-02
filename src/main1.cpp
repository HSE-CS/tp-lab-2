#include "task1.h"

int main()
{
    const size_t n = 4;
	int *val = new int[n]{5, 3, 1, 4};
	msort(val, n);
	for (size_t i = 0; i < n ; i++)
	    std::cout << val[i] << " ";
    std::cout << "\n";

    const size_t m = 5;
	char** str = new char*[m];
	str[0] = new char[6]{'H','E','L','L','O','\0'};
	str[1] = new char[3]{'H','I','\0'};
	str[2] = new char[7]{'T','H', 'A', 'N', 'K', 'S', '\0'};
	str[3] = new char[9]{'A','C', 'C', 'E', 'P', 'T', 'E', 'D', '\0'};
	str[4] = new char[4]{'H', 'S', 'E', '\0'};
	msort(str, m);
	for (size_t i = 0; i < m ; i++)
	    std::cout << str[i] << "\n";
    return 0;
}
