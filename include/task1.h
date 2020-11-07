#ifndef TASK1_H
#define TASK1_H
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <cstring>

typedef const char** stroka;

template <typename T> void msort(T* array, const int num_el)
{
        int step = 1;
        T* temp = new T[num_el];
        while (step < num_el)  
        {
            int index = 0;    
            int left = 0;      
            int mid = left + step;  
            int right = left + step * 2;  
            do
            {
                if (mid < num_el)
                    mid = mid;
                else mid = num_el; 
                if (right < num_el)
                    right = right;
                else right = num_el;
                int i1 = left;
                int i2 = mid;
                for (; i1 < mid && i2 < right; )
                {
                    if (array[i1] < array[i2]) 
                    {
                        temp[index++] = array[i1++];
                    }
                    else 
                    {
                        temp[index++] = array[i2++]; 
                    }
                }
           
                while (i1 < mid) temp[index++] = array[i1++]; 
                while (i2 < right) temp[index++] = array[i2++]; 
                left += step * 2; 
                mid += step * 2;
                right += step * 2;
            } while (left < num_el); 
            for (int i = 0; i < num_el; i++)
                array[i] = temp[i];
            step *= 2;
        }
        delete[] temp;
}

template<>
void msort <char*>(char** array, const int num_el)
{
    int step = 1;
    char** temp = new char* [num_el];
    while (step < num_el)
    {
        int index = 0;
        int left = 0;
        int mid = left + step;
        int right = left + step * 2;
        do
        {
            if (mid < num_el)
                mid = mid;
            else mid = num_el;
            if (right < num_el)
                right = right;
            else right = num_el;
            int i1 = left;
            int i2 = mid;
            for (; i1 < mid && i2 < right; )
            {
                if (strlen(array[i1]) < strlen(array[i2]))
                {
                    temp[index] = array[i1++]);
                }
                else
                {
                    temp[index] = array[i2++]);
                }
            }

            while (i1 < mid)
            {
                temp[index] = array[i1++]);
            }
            while (i2 < right)
            {
                temp[index] = array[i2++]);
            }
            left += step * 2;
            mid += step * 2;
            right += step * 2;

            
        } while (left < num_el);
        for (int i = 0; i < num_el; i++)
        {
            array[i] = temp[i];
        }
        /*for (size_t i = 0; i < num_el; i++)
            delete[] temp[i];*/
        step *= 2;
    }
    delete[] temp;
}

#endif

