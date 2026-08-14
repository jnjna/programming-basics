#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    struct node *head = malloc(sizeof(struct node));

    if (head == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    head->data = 42;
    head->next = NULL;

    printf("Data: %d\n", head->data);

    free(head);
    head = NULL;

    return 0;
}