#include <algorithm>
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;


template<typename T>
bool comp(T a, T b) {
	return (a < b);
}

template<>
bool comp<const char*>(const char* a, const char* b) {
	return strlen(a) < strlen(b);
	//return strcmp(a, b) < 0;
}


template<typename T>
void msort(T* A, size_t size) {
	if (size > 1) {
		size_t split{ size / 2 };
		size_t Llen{ split }, Rlen{ size - split };
		T* L = new T[Llen], * R = new T[Rlen];
		for (unsigned int i = 0; i < Llen; i++) {
			L[i] = A[i];
			//cout << 'L' << i << ' ' << L[i] << endl;
		}
		for (unsigned int i = 0; i < Rlen; i++) {
			R[i] = A[i + split];
			//cout << 'R' << i << ' ' << R[i] << endl;
		}
		msort(L, Llen);
		msort(R, Rlen);
		unsigned int Ri{ 0 }, Li{ 0 };
		while (Ri < Rlen && Li < Llen) {
			if (comp(R[Ri], L[Li])) {
				A[Ri + Li] = R[Ri];
				Ri++;
			}
			else {
				A[Ri + Li] = L[Li];
				Li++;
			}
		}
		while (Li < Llen) {
			A[Ri + Li] = L[Li];
			Li++;
		}
		while (Ri < Rlen) {
			A[Li + Ri] = R[Ri];
			Ri++;
		}
	}

	/*
	if (l == r) {
		T L[1] = { A[l] };
		return L;
	}
	unsigned int split = (r + l) / 2;
	unsigned int Llen = split, Rlen = r + l - split;
	//T* L = new T[Llen], * R = new T[Rlen];
	T* L = msort(A, l, split);
	T* R = msort(A, l + split + 1, r);
	T* Rez = new T[Llen + Rlen];
	unsigned int l_ind = 0, r_ind = 0;
	while (l_ind < Llen && r_ind < Rlen) {
		if (L[l_ind] < R[r_ind]) {
			Rez[l_ind + r_ind] = L[l_ind];
			l_ind++;
		}
		else {
			Rez[l_ind + r_ind] = R[r_ind];
			r_ind++;
		}
	}
	while (l_ind < Llen) {
		Rez[l_ind + r_ind] = L[l_ind];
		l_ind++;
	}
	while (r_ind < Rlen) {
		Rez[l_ind + r_ind] = R[r_ind];
		r_ind++;
	}
	return Rez;

	/*
	for (unsigned int i = 0; i < Llen; i++) {
		std::cout << L[i] << std::endl;
	}
	*/


}