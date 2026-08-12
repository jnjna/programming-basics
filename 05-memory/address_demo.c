#include <stdio.h>

int main(void)
{
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);

    printf("Address of num: %p\n", (void *)&num);

    printf("Value stored in ptr: %p\n", (void *)ptr);

    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 100;

    printf("Updated value of num: %d\n", num);

    return 0;
}