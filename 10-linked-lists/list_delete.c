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
    struct node *fourth = malloc(sizeof(struct node));

    if (first == NULL || second == NULL ||
        third == NULL || fourth == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");

        free(first);
        free(second);
        free(third);
        free(fourth);

        return 1;
    }

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    struct node *head = first;

    printf("Before deletion:\n");
    print_list(head);

    /*
     * Delete the node containing 30.
     *
     * third is the node being removed.
     * second must now point directly to fourth.
     */
    second->next = third->next;
    free(third);

    printf("After deletion:\n");
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