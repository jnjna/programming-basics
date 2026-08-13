#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("First: %d\n", *ptr);

    ptr++;
    printf("Second: %d\n", *ptr);

    ptr++;
    printf("Third: %d\n", *ptr);

    ptr--;
    printf("Back to second: %d\n", *ptr);

    return 0;
}