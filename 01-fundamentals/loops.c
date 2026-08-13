#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    for (int j = 1; j <= 5; j++)
    {
        printf("%d\n", j);
    }

    return 0;
}