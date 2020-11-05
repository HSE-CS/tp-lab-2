#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <string>
#include <cstring>

template<class T>
int comp(T a, T b){
    T dif=a-b;
    if (dif>0){
        return 1;
    }else if (dif<0){
        return -1;
    }
    return 0;
}

template<>
int comp(char* a, char* b){
    std::string s1 = a;
    std::string s2 = b;
    int dif = s1.length()-s2.length();
    if (dif>0){
        return 1;
    }else if (dif<0){
        return -1;
    }
    return 0;
}

template <class T>
void merge(T* mas, int l, int m, int r){
    l-=1;
    m-=1;
    r-=1;
    int size_1 = m - l + 1, size_2 = r - m;
    T* new_l = new T[size_1];
    T* new_r = new T[size_2];
    for(int i = 0; i < size_1; i++){
        new_l[i] = mas[l + i];
    }
    for(int j = 0; j < size_2; j++){
        new_r[j] = mas[m + 1 + j];
    }
    int i = 0,j = 0,tek = l;
    while (i < size_1 && j < size_2){
        if (comp(new_l[i], new_r[j])<0){//?
            mas[tek] = new_l[i];
            i++;
        }else{
            mas[tek] = new_r[j];
            j++;
        }
        tek++;
    }
    while (i < size_1){
        mas[tek] = new_l[i];
        i++;
        tek++;
    }
    while (j < size_2){
        mas[tek] = new_r[j];
        j++;
        tek++;
    }
    delete[] new_l;
    delete[] new_r;
}

template <class T>
void msort(T* mas, int r,int l = 1){
    if (r > l){
        int m = (l+r-2)/2+1;
        msort(mas,m,l);
        msort(mas,r, m+1);
        merge(mas,l,m,r);
    }
}

#endif