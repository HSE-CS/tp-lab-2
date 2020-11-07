#include <cstring>

// Compares x1 & x2 (as its values or lengths) and returns 0 for a (and 1 for b) if its bigger //
template<typename T>
bool compare(T t1, T t2) { return (t1 <= t2); }

template<>
bool compare(char *s1, char *s2) { return (strlen(s1) < strlen(s2)); }


// Merges two parts of array into one that is sorted
template<typename T>
void merge(T *arr, size_t l, size_t m, size_t r) {
    // Original copy of the massive as the given one will be changed
    T *arrOriginal = new T[r + 1];
    for (int i = l; i <= r; i++) arrOriginal[i] = arr[i];

    // Variables to index arr's components
    unsigned int x = l;
    unsigned int y = m + 1;

    // Merge sort
    for (int i = l; i <= r; ++i) {
        if (x > m) {
            arr[i] = arrOriginal[y];
            y++;
        } else if (y > r) {
            arr[i] = arrOriginal[x];
            x++;
        } else if (compare(arrOriginal[x], arrOriginal[y])) {
            arr[i] = arrOriginal[x];
            x++;
        } else {
            arr[i] = arrOriginal[y];
            y++;
        }
    }
}


// Recursive merge sort as it is, but with
// arguments are not that described in the task
template<typename T>
void start(T *a, size_t l, size_t r) {
    // Prevents wrong given data
    if (r <= l) return;

    // Calculates mid index
    size_t m = (l + r) / 2;

    //All the fun
    start(a, l, m);
    start(a, m + 1, r);
    merge(a, l, m, r);
}


// Function that Travis will address to
template<typename T>
void msort(T *a, size_t n) { start(a, 0, n - 1); }