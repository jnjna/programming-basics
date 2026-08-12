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

    fprintf(file, "Hello from C!\n");
    fprintf(file, "This is the second line.\n");
    fprintf(file, "This is the third line.\n");

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}