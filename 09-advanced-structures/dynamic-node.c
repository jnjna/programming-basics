#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *first = malloc(sizeof(Node));
    Node *second = malloc(sizeof(Node));

    if (first == NULL || second == NULL)
    {
        printf("Memory allocation failed.\n");
        free(first);
        free(second);
        return 1;
    }

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    printf("First: %d\n", first->data);
    printf("Second: %d\n", first->next->data);

    free(second);
    free(first);

    return 0;
}