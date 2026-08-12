#include <stdio.h>

int main() {
  FILE *file;
  char buffer[100];

  file = fopen("example.txt", "w");

  if (file == NULL) {
    printf("Failed to open file.\n");
    return 1;
  }

  fprintf(file, "Hello from C!\n");
  fprintf(file, "This is the second line.\n");
  fprintf(file, "This is the third line.\n");

  fclose(file);

  file = fopen("example.txt", "a");

  if (file == NULL) {
    printf("Failed to open file.\n");
    return 1;
  }

  fprintf(file, "This line was appended.\n");

  fclose(file);

  file = fopen("example.txt", "r");

  if (file == NULL) {
    printf("Failed to open file.\n");
    return 1;
  }

  printf("File contents:\n\n");

  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
  }

  fclose(file);

  return 0;
}