#include <iostream>
#include <string.h>
#include "task2.h"
#include <math.h>
#include <time.h>
#define ABSRAND 5000
#define LESSRAND 1000
#define POWERO 3
#define LIL 15
#define SIZE 10

using namespace std;

template<typename E> E gen()
{
	srand(time(0));
	static E start = rand() % ABSRAND;
	E step = 1 + rand() % LESSRAND;
	start += step;
	return start;
}

template<> double gen()
{
	srand(time(0));
	static double start = rand() % ABSRAND + (rand() % LESSRAND / (powf(10.0, (1 + rand() % POWERO))));
	double step = 1 + rand() % LESSRAND + (rand() % LESSRAND / (powf(10.0, (1 + rand() % POWERO))));
	start += step;
	return start;
}

template<> char* gen()
{
	srand(time(0));
	int len = 3 + rand() % LIL;
	static int step = 1 + rand() % LIL;
	char* x = new char[len];

	for (int i = 0; i < len - 1; i++) {
		x[i] = rand() % 255 + step;
	}
	x[len - 1] = '\0';
	step += step;

	return x;
}

int main() 
{
	int *ints = createArr<int,10>(gen);
	double *doubles = createArr<double, 10>(gen);
	char *chars = createArr<char, 10>(gen);
	char **strings = createArr<char*, 10>(gen);

	for (int i = 0; i < SIZE; i++)
	{
		cout << ints[i] << ' ';
	}
	cout << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << doubles[i] << ' ';
	}
	cout << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << chars[i] << ' ';
	}
	cout << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << strings[i] << endl;
	}

	delete[] ints;
	delete[] doubles;
	delete[] chars;
	for (int i = 0; i < SIZE; i++)
	{
		delete[] strings[i];
	}
	delete[] strings;

	return 0;
}