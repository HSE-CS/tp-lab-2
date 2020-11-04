//
// Created by islam on 15.09.2020.
//

#ifndef WORK_TASK1_H
#define WORK_TASK1_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>

using namespace std;

template <typename T> void merging(T array[], int arr_s, int lef, int rig){
    int pivot = 0;
    int st = 0;
    int fin = 0;
    int *arr=new int[arr_s];
    pivot = (lef + rig)/2;
    st = lef;
    fin = pivot + 1;

    for(int i = lef; i <=rig; i++){
        if(((fin > rig) || (array[st] < array[fin])))
        {
            if((st <= pivot) )
            {
                arr[i] = array[st];
                st++;
            }
        }else
        {
            arr[i] = array[fin];
            fin++;
        }
    }
    for(int i = lef; i <=rig; i++)
    {
        array[i] = arr[i];
    }
}

template <> void merging(char **array, int arr_s, int lef, int rig){
    int pivot = 0;
    int st = 0;
    int fin = 0;
    char** arr = new char*[arr_s];
    pivot = (lef + rig)/2;
    st = lef;
    fin = pivot + 1;

    for(int i = lef; i <= rig; i++){
        if((fin > rig) || (strlen(array[st]) < strlen(array[fin])))
        {
            if(st <= pivot)
            {
                arr[i] = array[st];
                st++;
            }

        }else
        {
            arr[i] = array[fin];
            fin++;
        }
    }
    for(int i = lef; i <= rig; i++)
    {
        array[i] = arr[i];
    }
}

template <typename T> void MergeSort(T array[], int size, int st, int fin)
{

    if(st < fin)
    {
        MergeSort(array, size, st, (st+fin)/2);
        MergeSort(array, size, (st+fin)/2+1, fin);
        merging(array, size , st, fin);
    }

}

template <> void MergeSort(char **array, int size, int st, int fin)
{

    if(st < fin)
    {
        MergeSort(array, size, st, (st+fin)/2);
        MergeSort(array, size, (st+fin)/2+1, fin);
        merging(array, size , st, fin);
    }

}

template<typename T> void msort(T array[], int arr_s, int lef = 0, int rig = 0){

    if (arr_s != 0)
    {
        MergeSort(array, arr_s, lef, arr_s - 1);
    }

}




#endif //WORK_TASK1_H
