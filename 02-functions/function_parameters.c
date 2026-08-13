#include <stdio.h>

void display_menu(void);
int add(int a, int b);
int subtract(int a, int b);

int main(void)
{
    int a = 10;
    int b = 4;

    display_menu();

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));

    return 0;
}

void display_menu(void)
{
    printf("Calculator\n");
    printf("----------\n");
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}