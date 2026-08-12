#include <stdio.h>

typedef enum
{
    INTEGER,
    DECIMAL,
    CHARACTER
} DataType;

typedef union
{
    int number;
    float decimal;
    char letter;
} Data;

typedef struct
{
    DataType type;
    Data data;
} Value;

int main()
{
    Value value;

    value.type = INTEGER;
    value.data.number = 42;

    if (value.type == INTEGER)
    {
        printf("Integer: %d\n", value.data.number);
    }

    value.type = DECIMAL;
    value.data.decimal = 3.14f;

    if (value.type == DECIMAL)
    {
        printf("Decimal: %.2f\n", value.data.decimal);
    }

    value.type = CHARACTER;
    value.data.letter = 'A';

    if (value.type == CHARACTER)
    {
        printf("Character: %c\n", value.data.letter);
    }

    return 0;
}