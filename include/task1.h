#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template <typename T>
bool comp(T a, T b) {
    return (a <= b);
}

template <>
bool comp(char* a, char* b) {
    return (strlen(a) < strlen(b));
}

template<typename T>
void merge(T* a, int first, int last) {

    int left_part, right_part, middle, num = 0, j = 0;
    T* sorted_part = new T[last + 1];
    left_part = first;
    right_part = (first + last) / 2;
    middle = right_part - 1;

    for (int i = first; i < last; i++) {
        if ((left_part <= middle) && ((right_part >= last) || comp(a[left_part], a[right_part]))) {
            sorted_part[num++] = a[left_part];
            left_part++;
        }
        else {
            sorted_part[num++] = a[right_part];
            right_part++;
        }
    }

    for (int i = first; i < last; i++) {
        a[i] = sorted_part[j];
        j++;
    }

    delete [] sorted_part;
}

template <typename T>
void merge_sort(T* a, int first, int last) {
    if (first < last - 1) {
        int middle = first + last;
        middle = (middle)/2;

        merge_sort(a, first, middle);
        merge_sort(a, middle, last);
        merge(a, first, last);
    }
}

template <typename T>
void msort(T* a, size_t n) {
    merge_sort(a, 0, n);
}

#endif //TASK1_TASK1_H
