#include <stdio.h>

int main(void)
{
    char str[] = "Hello World!";

    printf("String: %s\n", str);

    printf("First character: %c\n", str[0]);
    printf("Last character: %c\n", str[11]);

    return 0;
}