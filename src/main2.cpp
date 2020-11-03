#include "task2.h"

/*template<class T>
T gen()
{
	static int t = 48;
	return t++;
}
template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

int main()
{
	char** my_arr = createArr<char*, 10>(gen);
	for (int i=0;i<10;i++)
		cout << my_arr[i] << " ";

}*/