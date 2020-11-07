/*
 * @author Stanislav Stoianov
 */

/*
 * Написать шаблонную функцию msort, сортирующую массив элементов T слиянием.
 * Если тип элемента массива char*, то производится сортировка по длине строк.
 */

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <vector>

using namespace std;

template<typename T>
void MergeSortWorker(vector<T> &a, vector<T> &x, int s, int e) {
    if (e - s < 1) return;
    int m = (s + e) / 2;
    MergeSortWorker<T>(a, x, s, m);
    MergeSortWorker<T>(a, x, m + 1, e);
    int i = s, j = m + 1, k = 0;
    while (i <= m && j <= e) {
        if (a[i] < a[j]) {
            x[k] = a[i];
            i++;
            k++;
        } else {
            x[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= m) {
        x[k] = a[i];
        i++;
        k++;
    }
    while (j <= e) {
        x[k] = a[j];
        j++;
        k++;
    }
    for (i = s; i <= e; i++) a[i] = x[i - s];
}

template<typename T>
void msort(vector<T> &v) {
    vector<T> x(v.size());
    MergeSortWorker<T>(v, x, 0, v.size() - 1);
}

template<typename T>
bool Sorting(vector<T> &a) {
    for (int i = 0; i < a.size() - 1; ++i) if (a[i] > a[i + 1]) return false;
    return true;
}

#endif