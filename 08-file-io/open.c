#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    printf("File opened successfully.\n");

    fclose(file);

    return 0;
}