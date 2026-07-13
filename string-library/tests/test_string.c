#include <stdio.h>
#include "mystring.h"

int main(void)
{
    int length = my_strlen("Hello");

    printf("Testing my_strlen(\"Hello\")\n");
    printf("Expected: 5\n");
    printf("Actual:   %d\n", length);

    return 0;
}
