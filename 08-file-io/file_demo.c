#include <stdio.h>

int main() {
  FILE *file;
  char buffer[100];

  file = fopen("example.txt", "w");

  if (file == NULL) {
    return 1;
  }

  fprintf(file, "Hello from C!\n");

  fclose(file);

  file = fopen("example.txt", "r");

  if (file == NULL) {
    return 1;
  }

  fgets(buffer, sizeof(buffer), file);

  printf("File contents: %s", buffer);

  fclose(file);

  return 0;
}