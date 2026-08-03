#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Simple Calculator\n");
    printf("=================\n\n");

    do
    {
        printf("Select an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            continue;
        }

        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice. Please try again.\n\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice)
        {
            case 1:
                printf("Result: %d\n", a + b);
                break;

            case 2:
                printf("Result: %d\n", a - b);
                break;

            case 3:
                printf("Result: %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                {
                    printf("Result: %.2f\n", (float)a / b);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
        }

        printf("\n");

    } while (choice != 5);

    printf("Thank you for using the calculator. Goodbye!\n");

    return 0;
}
