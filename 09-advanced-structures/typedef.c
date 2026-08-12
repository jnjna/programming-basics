#include <stdio.h>

typedef struct Student {
  char name[50];
  int age;
  float gpa;
} Student;

int main() {
  Student student;

  printf("Size of Student: %zu bytes\n", sizeof(student));

  return 0;
}