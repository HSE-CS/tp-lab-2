#ifndef  TASK1_H
#define TASK1_H


#include<string.h>


template<class T>
bool comp(T a, T b) {
	return (a < b);
}

template<> bool comp<char*>(char* a, char* b)
{
	return (strlen(a) < strlen(b));
}

template<class T>
void msort(T *arr, size_t n) {
	if (n > 1) {
		size_t l_size = n / 2;
		size_t r_size = n - l_size;
		T *l_arr = new T[l_size];
        T* r_arr = new T[r_size];

		for (size_t i = 0; i < l_size; i++) {
			l_arr[i] = arr[i];
		}
		msort(l_arr, l_size);

		for (size_t i = 0; i < r_size; i++) {
			r_arr[i] = arr[i + l_size];
		}
		msort(r_arr, r_size);

        unsigned i = 0, j = 0, k = 0;

	    while (i != l_size && j != r_size)
	    {
		    if (comp(l_arr[i], r_arr[j]))
			    arr[k++] = l_arr[i++];
		    else
			    arr[k++] = r_arr[j++];
	    }

	    if (i < l_size)
		    while (i < l_size)
			    arr[k++] = l_arr[i++];
	    else if (j < r_size)
		    while (j < r_size)
			    arr[k++] = l_arr[j++];

        delete l_arr;
        delete r_arr;
	}
}

#endif 
