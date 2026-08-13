#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World!";

    printf("String: %s\n", str);
    printf("Length: %zu\n", strlen(str));

    return 0;
}