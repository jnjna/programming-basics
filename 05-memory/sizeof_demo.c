#include <stdio.h>

int main(void)
{
    int num;
    float decimal;
    char letter;
    double large_decimal;

    printf("Size of int: %zu bytes\n", sizeof(num));
    printf("Size of float: %zu bytes\n", sizeof(decimal));
    printf("Size of char: %zu byte\n", sizeof(letter));
    printf("Size of double: %zu bytes\n", sizeof(large_decimal));

    int arr[5];

    printf("Size of arr: %zu bytes\n", sizeof(arr));
    printf("Number of elements: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}