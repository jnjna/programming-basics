#include <stdio.h>

void display_menu(void);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide_numbers(int a, int b);

int main(void)
{
    int choice;
    int a;
    int b;

    display_menu();

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;

        case 2:
            printf("Result: %d\n", subtract(a, b));
            break;

        case 3:
            printf("Result: %d\n", multiply(a, b));
            break;

        case 4:
            if (b == 0)
            {
                printf("Cannot divide by zero.\n");
                return 1;
            }

            printf("Result: %.2f\n", divide_numbers(a, b));
            break;
    }

    return 0;
}

void display_menu(void)
{
    printf("Calculator\n");
    printf("----------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide_numbers(int a, int b)
{
    return (float)a / b;
}