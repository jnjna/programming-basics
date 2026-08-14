#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *head);
void free_list(struct node *head);

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

    /* Insert 15 between 10 and 20 */
    struct node *insert = malloc(sizeof(struct node));

    if (insert == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free_list(head);
        return 1;
    }

    insert->data = 15;
    insert->next = first->next;
    first->next = insert;

    print_list(head);

    /* Insert 5 at the beginning */
    struct node *new_head = malloc(sizeof(struct node));

    if (new_head == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free_list(head);
        return 1;
    }

    new_head->data = 5;
    new_head->next = head;
    head = new_head;

    print_list(head);

    free_list(head);

    return 0;
}

void print_list(struct node *head)
{
    struct node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

void free_list(struct node *head)
{
    struct node *current = head;

    while (current != NULL)
    {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }
}