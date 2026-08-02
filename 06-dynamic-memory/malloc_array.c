#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("How many integers? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\n");

    printf("Enter integer 1: ");
    scanf("%d", &arr[0]);

    int sum = arr[0];
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum += arr[i];

        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    float average = (float)sum / n;

    printf("\nYou entered:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
    printf("Sum      : %d\n", sum);
    printf("Average  : %.2f\n", average);
    printf("Largest  : %d\n", largest);
    printf("Smallest : %d\n", smallest);

    free(arr);
    arr = NULL;

    return 0;
}
