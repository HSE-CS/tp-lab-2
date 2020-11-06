#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class BUF {
public: 
	int length;
	int index;
};

template <typename T>
T* merge(T* m1, T* m2, int l1, int l2) {
	T* ret = new T[l1 + l2];
	int n = 0;

	while (l1 && l2) {
		if (*m1 < *m2) {
			ret[n] = *m1;
			m1++; l1--;
		}
		else {
			ret[n] = *m2;
			m2++; l2--;
		}
		n++;
	}

	if (l1 == 0) {
		for (int i = 0; i < l2; i++) {
			ret[n++] = *m2++;
		}
	}

	else {
		for (int i = 0; i < l1; i++) {
			ret[n++] = *m1++;
		}
	}
	return ret;
}

template<> BUF* merge(BUF* m1, BUF* m2, int l1, int l2) {
	BUF* ret = new BUF[l1 + l2];
	int n = 0;

	while (l1 && l2) {
		if ((*m1).length < (*m2).length) {
			ret[n] = *m1;
			m1++; l1--;
		}
		else {
			ret[n] = *m2;
			m2++; l2--;
		}
		n++;
	}

	if (l1 == 0) {
		for (int i = 0; i < l2; i++) {
			ret[n++] = *m2++;
		}
	}

	else {
		for (int i = 0; i < l1; i++) {
			ret[n++] = *m1++;
		}
	}
	return ret;
}


template <typename T>
void msort(T* mas, int len) {
	int n = 1, l, ost;
	T* mas1;
	while (n < len) {
		l = 0;
		while (l < len) {
			if (l + n >= len) break;
			ost = (l + n * 2 > len) ? (len - (l + n)) : n;
			mas1 = merge(mas + l, mas + l + n, n, ost);
			for (int i = 0; i < n + ost; i++) mas[l + i] = mas1[i];
			delete[] mas1;
			l += n * 2;
		}
		n *= 2;
	}
}

template<> void msort(char** mas, int len) {
	BUF* buf = (BUF*)malloc(sizeof(BUF) * len);
	for (int i = 0; i < len; ++i) {
		buf[i].length = strlen(mas[i]);
		buf[i].index = i;
	}
	int n = 1, l, ost;
	BUF* mas1;
	while (n < len) {
		l = 0;
		while (l < len) {
			if (l + n >= len) break;
			ost = (l + n * 2 > len) ? (len - (l + n)) : n;
			mas1 = merge(buf + l, buf + l + n, n, ost);
			for (int i = 0; i < n + ost; i++) buf[l + i] = mas1[i];
			delete[] mas1;
			l += n * 2;
		}
		n *= 2;
	}
	/*for (int i = 0; i < 2; ++i) {
		std::cout << buf[i].length << "\n";
	}*/
	char** mas2 = (char**)malloc(len * sizeof(char));
	for (int i = 0; i < len; ++i) {
		mas2[i] = (char*)malloc(strlen((mas[buf[i].index]) + 1) * sizeof(char));
		strcpy(mas2[i], mas[buf[i].index]);
	}
	for (int i = 0; i < len; ++i) {
		mas[i] = (char*)calloc(strlen(mas2[i]) + 1, sizeof(char));
		strcpy(mas[i], mas2[i]);
	}
}
