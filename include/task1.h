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
    int pivot, st, fin;
    int *arr = new int[arr_s];
    pivot = (lef+rig) / 2;
    st = lef;
    fin = pivot + 1;
    for(int i = lef; i<=rig;i++)
    {
        if(fin>rig || array[st] < array[fin]){
            if(st<=pivot)
            {
                arr[i] = array[st];
                st++;
            }
        }else{
            arr[i] = array[fin];
            fin++;
        }
        for(int i = lef; i <=rig; i++)
        {
            array[i] = arr[i];
        }

    }
}


template<typename T> void msort(T array[], int arr_s, int lef = 0, int rig = 0){

    if(arr_s != 0 && rig == 0)
    {
        rig = arr_s - 1;
        arr_s = 0;
    }

    if(lef < rig)
    {
        cout<<"here"<<endl;
        msort<T>(array, arr_s, lef, (rig+lef)/2);
        msort<T>(array, arr_s, (rig+lef)/2 + 1, rig);
        merging(array, arr_s, lef, rig);
    }
}




#endif //WORK_TASK1_H
