#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    printf("Integer division: %d\n", a / b);
    printf("Floating-point division: %.2f\n", (float)a / b);

    return 0;
}