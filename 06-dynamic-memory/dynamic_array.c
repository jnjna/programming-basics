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

    int sum = 0;
    int largest;
    int smallest;

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum += arr[i];

        if (i == 0)
        {
            largest = arr[i];
            smallest = arr[i];
        }
        else
        {
            if (arr[i] > largest)
                largest = arr[i];

            if (arr[i] < smallest)
                smallest = arr[i];
        }
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