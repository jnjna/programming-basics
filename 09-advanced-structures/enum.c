#include <stdio.h>

typedef enum
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
} Day;

int main()
{
    Day today = WEDNESDAY;

    printf("Today has value: %d\n", today);

    if (today == WEDNESDAY)
    {
        printf("It is Wednesday!\n");
    }

    return 0;
}