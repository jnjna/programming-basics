#include <stdio.h>

int main()
{
    FILE *file;
    char buffer[100];

    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    printf("File contents:\n\n");

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}