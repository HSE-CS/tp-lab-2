#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

template<typename T>

void merge(T *massiv, int l, int r, size_t size){
    if (l==r){
        return;
    }
    int mid = (l + r+1) / 2; // находим середину сортируемой последовательности
    if ((l + r+1) % 2 == 1)
        mid++;
    merge(massiv, l, mid - 1, size);
    merge(massiv, mid, r,size);
    int i = l;
    int j = mid;
    T *b = new T [size];
    for (int k=0;k<r-l+1;k++){
        if ((j > r) || ((massiv[i] < massiv[j]) && (i < mid))){
            b[k] = massiv[i];
            i+=1;
        }
        else{
            b[k] = massiv[j];
            j+=1;
        }
    }
    for (int k=0;k<r-l+1;k++){massiv[l + k] = b[k];}
    delete b;
}
template<>
void merge(char** massiv, int l, int r, size_t size){
    if (l==r){
        return;
    }
    int mid = (l + r+1) / 2; // находим середину сортируемой последовательности
    if ((l + r+1) % 2 == 1)
        mid++;
    merge(massiv, l, mid - 1, size);
    merge(massiv, mid, r,size);
    int i = l;
    int j = mid;
    char **b = new char* [size];

    for (int k=0;k<r-l+1;k++){
        if ((j > r) || ((strlen(massiv[i]) < strlen(massiv[j])) && (i < mid))){
            b[k] = massiv[i];
            i+=1;
        }
        else{
            b[k] = massiv[j];
            j+=1;
        }
    }
    for (int k=0;k<r-l+1;k++){massiv[l + k] = b[k];}
    delete b;
}
template<typename T>
void msort(T *massiv, size_t size ) {
    int l=0;
    int r=size-1;
    int mid = (l + r+1) / 2; // находим середину сортируемой последовательности
    if ((l + r+1) % 2 == 1)
        mid++;
    merge(massiv, l, mid - 1, size);
    merge(massiv, mid, r,size);
    int i = l;
    int j = mid;
    T *b = new T [size];
    for (int k=0;k<r-l+1;k++){
        if ((j > r) || ((massiv[i] < massiv[j]) && (i < mid))){
            b[k] = massiv[i];
            i+=1;
        }
        else{
            b[k] = massiv[j];
            j+=1;
        }
    }
    for (int k=0;k<r-l+1;k++){massiv[l + k] = b[k];}
    delete b;
}
template<>
void msort(char** massiv, size_t size ) {
    int l=0;
    int r=size-1;
    int mid = (l + r+1) / 2; // находим середину сортируемой последовательности
    if ((l + r+1) % 2 == 1)
        mid++;
    merge(massiv, l, mid - 1, size);
    merge(massiv, mid, r,size);
    int i = l;
    int j = mid;
    char **b = new char* [size];
    for (int k=0;k<r-l+1;k++){
        if ((j > r) || ((strlen(massiv[i]) < strlen(massiv[j])) && (i < mid))){
            b[k] = massiv[i];
            i+=1;
        }
        else{
            b[k] = massiv[j];
            j+=1;
        }
    }
    for (int k=0;k<r-l+1;k++){massiv[l + k] = b[k];}
    delete b;
}