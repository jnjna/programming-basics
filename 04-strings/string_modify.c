#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World!";

    printf("Original: %s\n", str);

    str[0] = 'h';

    printf("Modified: %s\n", str);

    return 0;
}