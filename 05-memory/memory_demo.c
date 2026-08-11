#include <stdio.h>
#include <stdlib.h>
int main() {
  int n = 7;
  printf("Using malloc()\n");
  printf("--------------\n");
  printf("Allocating memory for %d integers using malloc(%d * sizeof(int)).\n",
         n, n);
  int *ptr = malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }
  printf("Allocated address: %p\n\n", (void *)ptr);
  for (int i = 0; i < n; i++) {
    printf("Storing value %d in ptr[%d]\n", i + 1, i);
    ptr[i] = i + 1;
  }
  printf("\nStored values:\n");
  for (int i = 0; i < n; i++) {
    printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  free(ptr);
  ptr = NULL;
  printf("\nMemory freed successfully.\n\n");
  printf("Using calloc()\n");
  printf("--------------\n");
  printf("Allocating memory for %d integers using calloc(%d, sizeof(int)).\n",
         n, n);
  ptr = calloc(n, sizeof(int));
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }
  printf("Allocated address: %p\n\n", (void *)ptr);
  printf("Memory allocated with calloc() is initialized to zero:\n");
  for (int i = 0; i < n; i++) {
    printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  free(ptr);
  ptr = NULL;
  printf("\nMemory freed successfully.\n");
  return 0;
}