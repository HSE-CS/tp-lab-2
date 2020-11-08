#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>

//using namespace std;

template <typename T> bool comp(T a, T b)
{
	return a <= b;
}
template <> bool comp<char *>(char * a, char * b)
{
	return strlen(a) <= strlen(b);
}


template <typename T> void msort(std::vector <T> &a, size_t start, size_t end)
{
	if (end - start < 2)
		return;
	if (end - start == 2)
	{
		if (!comp(a[start], a[start + 1]))
			std::swap(a[start], a[start + 1]);
		return;
	}
	msort(a, start, start + (end - start) / 2);
	msort(a, start + (end - start) / 2, end);
	std::vector <T> b;
	size_t b1 = start;
	size_t e1 = start + (end - start) / 2;
	size_t b2 = e1;
	// e2 = end

	while (b.size() < end - start)
	{
		if (b1 >= e1 || (b2 < end && comp(a[b2], a[b1])))
		{
			b.push_back(a[b2]);
			++b2;
		}
		else
		{
			b.push_back(a[b1]);
			++b1;
		}
	}
	for (size_t i = start; i < end; ++i)
		a[i] = b[i - start];
}
