#include <stdio.h>
#include <stdlib.h>
#include "functionality.h"
#include <pthread.h>


//Normal insertion sort algorithm
void insertion_sort(int arr[], int n)
{
  int i, j, key;

  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    while(j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
