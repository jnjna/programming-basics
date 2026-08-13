#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World!";
    char str2[20];

    strcpy(str2, str);

    printf("Original: %s\n", str);
    printf("Copied: %s\n", str2);

    str[0] = 'h';

    printf("\nAfter modifying original:\n");
    printf("Original: %s\n", str);
    printf("Copied: %s\n", str2);

    return 0;
}