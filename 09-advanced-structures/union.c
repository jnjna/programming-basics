#include <stdio.h>

typedef union
{
    int number;
    float decimal;
    char letter;
} Data;

int main()
{
    Data data;

    data.number = 42;
    printf("Number: %d\n", data.number);

    data.decimal = 3.14f;
    printf("Decimal: %.2f\n", data.decimal);

    data.letter = 'A';
    printf("Letter: %c\n", data.letter);

    return 0;
}