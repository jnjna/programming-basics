#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    struct node *first = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    if (first == NULL || second == NULL || third == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");

        free(first);
        free(second);
        free(third);

        return 1;
    }

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    struct node *head = first;
    struct node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");

    current = head;

    while (current != NULL)
    {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    head = NULL;

    return 0;
}