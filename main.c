#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "functionality.h"

int main() {
  fill_rand();
  print_rand();
  insertion_sort(array_of_int, MAX_NUMBER);
  print_rand();
  return 0;
}
