#include <stdio.h>

void add_ten(int *num)
{
    *num += 10;
}

int main(void)
{
    int num = 5;

    printf("Before: %d\n", num);

    add_ten(&num);

    printf("After: %d\n", num);

    return 0;
}