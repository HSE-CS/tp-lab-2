#ifndef TASK1_H
#define TASK1_H


#include <iostream>
#include <cstring>

using namespace std;

template <typename T> bool comp(T a, T b)
{
	return (a < b);
}

template <> bool comp(char* a, char* b)
{
	return (strlen(a) < strlen(b));
}

template<typename T>
void merge(T *arr,size_t n, size_t l, size_t r) {
  T *mas=new T[n];
  size_t mid=(l+r)/2,start=l,fin=mid+1; 
  for(size_t i=l; i<=r; i++) {
    if ((start<=mid) && ((fin>r) || (comp(arr[start],arr[fin]))))
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
  delete []mas
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
