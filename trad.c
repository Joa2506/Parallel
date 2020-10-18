#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *entry_point(int i)
{
  printf("This is thread %d\n", i);
  return NULL;
}

int main() {
  pthread_t thread;

  int num = 123;
  printf("%s\n", "Main thread");
  for (int i = 0; i < 10; i++) {
    pthread_create(&thread, NULL, entry_point(i), &num);
  }


  apthread_join(thread, NULL);
  return 0;
}
