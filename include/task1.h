#ifndef TASK1_H
#define TASK1_H


#include <iostream>
#include <cstring>

using namespace std;


template<typename T>
void merge(T *arr,size_t n, size_t l, size_t r) {
  T *mas=new T[n];
  size_t mid=(l+r)/2,start=l,fin=mid+1; 
  for(size_t i=l; i<=r; i++) {
    if ((start<=mid) && ((fin>r) || (arr[start]<arr[fin])))
    {
      mas[i]=arr[start];
      start++;
    }
    else
    {
      mas[i]=arr[fin];
      fin++;
    }
  }
  for (size_t i=l; i<=r; i++) arr[i]=mas[i];
}
template<>
void merge(char **arr,size_t n, size_t l, size_t r) {
  char **mas=new char*[n];
  size_t mid=(l+r)/2,start=l,fin=mid+1; 
  for(size_t i=l; i<=r; i++) {
    if ((start<=mid) && ((fin>r) || (strlen(arr[start]) < strlen(arr[fin]))))
    {
      mas[i]=arr[start];
      start++;
    }
    else
    {
      mas[i]=arr[fin];
      fin++;
    }
  }
  for (size_t i=l; i<=r; i++) arr[i]=mas[i];

}

template<typename T>
void msort(T arr, size_t n, size_t l = 0, size_t r = -1) {
    if (r==-1){
      r=n-1;
    }
    if (l<r){
      int mid=(l+r)/2;
      msort(arr,mid+1,0,mid);
      msort(arr,n-mid-1,mid+1,r);
      merge(arr,n,l,r);
    }
}



#endif 
