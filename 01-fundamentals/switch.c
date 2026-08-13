#include <stdio.h>

int main(void)
{
    int choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Choose an operation: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected addition.\n");
            break;

        case 2:
            printf("You selected subtraction.\n");
            break;

        case 3:
            printf("You selected multiplication.\n");
            break;

        case 4:
            printf("You selected division.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}