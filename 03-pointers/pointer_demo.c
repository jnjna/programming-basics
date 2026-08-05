#include <stdio.h>

int main() {
  int num = 10;

  int *ptr;

  ptr = &num;

  printf("Value of num: %d\n", num);

  printf("Address of num: %p\n", (void *)&num);

  printf("Value stored in ptr: %p\n", (void *)ptr);

  printf("Value pointed to by ptr: %d\n", *ptr);
  
  printf("Address of ptr: %p\n", (void *)&ptr);

  *ptr = 20;

  printf("Updated value of num: %d\n", num);

  return 0;
}