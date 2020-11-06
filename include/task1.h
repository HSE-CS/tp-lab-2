#include <iostream>
#include <cstring>
using namespace std;

template <class T>
bool cmp(T& a, T& b) {
    return a < b;
}

template<>
bool cmp(char*& a, char*& b) {
    return strlen(a) < strlen(b);
}


template <class T>
void msort(T array[], size_t n) {
    if (n < 2)
        return;

    msort(array, n / 2);
    msort((array + n / 2), (n - n / 2));

    int l = 0, r = 0;
    T* tmp = new T[n];

    while (l < (n / 2) && r < (n - n / 2)) {
        if (cmp(array[l], array[(n / 2) + r])) {
            tmp[l + r] = array[l];
            l++;
        }
        else {
            tmp[l + r] = array[n / 2 + r];
            r++;
        }
    }

    while (l < (n / 2)) {
        tmp[l + r] = array[l];
        l++;
    }
    while ((n / 2 + r) < n) {
        tmp[l + r] = array[n / 2 + r];
        r++;
    }

    for (size_t i = 0; i < n; i++)
        array[i] = tmp[i];
}