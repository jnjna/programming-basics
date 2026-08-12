#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("example.txt", "a");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    fprintf(file, "This line was appended.\n");

    fclose(file);

    printf("Data appended successfully.\n");

    return 0;
}