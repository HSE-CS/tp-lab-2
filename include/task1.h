#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>
// Функция сортировки двухпутевым слиянием
template<class T>
T* merge(T *m1, T* m2, int l1, int l2)
{
    T* ret = new T[l1+l2];
    int n = 0;
    // Сливаем массивы, пока один не закончится
    while (l1 && l2) {
        if (*m1 < *m2) {
            ret[n] = *m1;
            m1++;
            --l1;
        } else {
            ret[n] = *m2;
            ++m2;
            --l2;
        }
        ++n;
    }
    // Если закончился первый массив
    if (l1 == 0) {
        for (int i = 0; i < l2; ++i) {
            ret[n++] = *m2++;
        }
    } else { // Если закончился второй массив
        for (int i = 0; i < l1; ++i) {
            ret[n++] = *m1++;
        }
    }
    return ret;
}
  

template <class T>
void msort(T * mas, int len)
{
    int n = 1, l, ost;
    T * mas1;
    while (n < len) {
        l = 0;
        while (l < len) {
            if (l + n >= len) break;
            ost = (l + n * 2 > len) ? (len - (l + n)) : n;
            mas1 = merge(mas + l, mas + l + n, n, ost);
            for (int i = 0; i < n + ost; ++i)
                mas[l+i] = mas1[i]; 
            delete [] mas1;
            l += n * 2;
        }
        n *= 2;
    }
}
void msort(char * a[], int num)
{

    int rght, rend;
    int i, j, m;
    char * b[num];
    for(int i = 0; i < num; i++)
    {
    	b[i] = (char*)calloc(100,sizeof(char));
    }
 
    for (int k = 1; k < num; k *= 2)
    {
        for (int left = 0; left + k < num; left += k * 2)
        {
            rght = left + k;
            rend = rght + k;
            if (rend > num) rend = num;
            m = left; i = left; j = rght;
            while (i < rght && j < rend)
            {
                if (strlen(a[i]) < strlen(a[j]))
                {
 
                   strcpy(b[m],a[i]); i++;
                }
                else
                {
                    strcpy(b[m],a[j]); j++;
                }
                m++;
            }
            while (i < rght)
            {
                strcpy(b[m],a[i]);
                i++; m++;
            }
            while (j < rend)
            {
                strcpy(b[m],a[j]);
                j++; m++;
            }
            for (m = left; m < rend; m++)
            {
            	a[m] = (char*)realloc(NULL,strlen(b[m]));
                strcpy(a[m],b[m]);
            }
        }
    }
    for(int i = 0; i < num; i++)
    	free(b[i]);

}







