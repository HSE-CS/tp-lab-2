#ifndef TASK3_H
#define TASK3_H

template<typename T> T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template <typename T, size_t size> void map(T(&arr)[size], T(*fun)(T)) {
	for (auto& it : arr)
	{
		it = fun(it);
	}
}


#endif
