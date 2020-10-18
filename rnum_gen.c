#include <stdio.h>
#include <stdlib.h>
#include "functionality.h"

void fill_rand()
{
  int i;

  for (i = 0; i < MAX_NUMBER; i++) {
    //printf("%d\n", rand()%50);
    array_of_int[i] = rand() % 100;
  }

  //printf("Size of random_numbers: %ld\n", sizeof(array_of_int)/sizeof(int));

}

void print_rand()
{
  int i;
  for (i = 0; i < MAX_NUMBER; i++) {
    printf("%d\n", array_of_int[i]);
  }
  printf("Size of random_numbers: %ld\n", sizeof(array_of_int)/sizeof(int));
}
