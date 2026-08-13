#include <stdio.h>

int main(void)
{
    int a, b, choice;

    do
    {
        printf("\nCalculator\n");
        printf("----------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice.\n");
            continue;
        }

        if (choice == 5)
        {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter two integers: ");
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
                if (b == 0)
                {
                    printf("Cannot divide by zero.\n");
                }
                else
                {
                    printf("Result: %.2f\n", (float)a / b);
                }
                break;
        }

    } while (choice != 5);

    return 0;
}