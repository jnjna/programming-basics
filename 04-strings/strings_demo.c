#include <stdio.h>
#include <string.h>

int main() {

  char str[] = "Hello World!";

  printf("String: %s\n", str);

  printf("Length: %zu\n", strlen(str));

  printf("First character: %c\n", str[0]);

  printf("Last character: %c\n", str[strlen(str) - 1]);

  str[0] = 'h';

  printf("Modified string: %s\n", str);

  char str2[20];

  strcpy(str2, str);

  str[1] = 'a';

  printf("Original: %s\n", str);

  printf("Copied string: %s\n", str2);

  if (strcmp(str, str2) == 0) {
    printf("The strings are equal.\n");
  } else {
    printf("The strings are not equal.\n");
  }

  return 0;
}