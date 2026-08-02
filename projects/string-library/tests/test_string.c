#include <stdio.h>
#include "mystring.h"

int main(void)
{
    printf("Testing my_strlen\n");
    printf("Length of \"Hello\": %d\n\n", my_strlen("Hello"));

    printf("Testing my_strcpy\n");
    char copy[100];
    my_strcpy(copy, "Engineering");
    printf("Copied string: %s\n\n", copy);

    printf("Testing my_strcmp\n");
    printf("\"apple\" vs \"apple\" = %d\n", my_strcmp("apple", "apple"));
    printf("\"apple\" vs \"banana\" = %d\n", my_strcmp("apple", "banana"));
    printf("\"banana\" vs \"apple\" = %d\n\n", my_strcmp("banana", "apple"));

    printf("Testing my_strcat\n");
    char concat[100] = "Hello ";
    my_strcat(concat, "World!");
    printf("Concatenated string: %s\n\n", concat);

    printf("Testing my_strchr\n");
    char *location = my_strchr("Engineering", 'n');

    if (location != NULL)
        printf("First 'n' found at: %s\n\n", location);
    else
        printf("Character not found.\n\n");

    printf("Testing my_memcpy\n");
    char src1[] = "Memory Copy";
    char dest1[100];

    my_memcpy(dest1, src1, my_strlen(src1) + 1);
    printf("Copied memory: %s\n\n", dest1);

    printf("Testing my_memmove\n");
    char overlap[] = "123456789";

    my_memmove(overlap + 2, overlap, 5);
    printf("After memmove: %s\n\n", overlap);

    printf("Testing my_memset\n");
    char buffer[11];

    my_memset(buffer, '*', 10);
    buffer[10] = '\0';

    printf("After memset: %s\n", buffer);

    return 0;
}
