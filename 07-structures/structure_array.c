#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    struct Student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter GPA for student %d: ", i + 1);
        scanf("%f", &students[i].gpa);

        getchar();
    }

    printf("\nStudent Information\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    return 0;
}