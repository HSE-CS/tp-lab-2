#include <iostream>
#include "task2.h"

using namespace std;

int func()
{
  return 42;
}

int main()
{
  const size_t n = 10;
  int* arr;
  arr = createArr<int, n>(func);

  for(int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
}
