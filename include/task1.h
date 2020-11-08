#include <iostream>
#include<cstring>


template<typename T>
bool comp(T a, T b) {
    return (a < b);
}
template<> bool comp<char*>(char* first, char* second){
    return strlen(first) < strlen(second);
}
template<typename T>
void msort(T *a, int n) {
    if(n>1){
        int first = n / 2;
        int second = n - first;
        T *new_a = new T[first];
        for (int i = 0; i < first; i++) {
            new_a[i] = a[i];
        }
        msort(new_a, first);
        T* new_r = new T[second];
        for (int i = 0; i < second; i++) {
            new_r[i] = a[i + first];
        }
        msort(new_r, second);
        int firstind = 0, secondind = 0;
        for (int i = 0; i < n; i++) {
            if (firstind < first && secondind < second) {
                if (comp(new_a[firstind], new_r[secondind])) {
                    a[i] = new_a[firstind];
                    firstind++;
                }
                else {
                    a[i] = new_r[secondind];
                    secondind++;
                }
            }
            else if (firstind == first) {
                a[i] = new_r[secondind];
                new_r++;
            }
            else if (secondind == second) {
                a[i] = new_a[firstind];
                new_a++;
            }
        }
    }
    
}
