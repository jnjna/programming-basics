#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_node(int data);
void print_list(struct node *head);
void free_list(struct node *head);

int main(void)
{
    struct node *head = NULL;

    struct node *first = create_node(10);
    struct node *second = create_node(20);
    struct node *third = create_node(30);

    if (first == NULL || second == NULL || third == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");

        free(first);
        free(second);
        free(third);

        return 1;
    }

    first->next = second;
    second->next = third;

    head = first;

    /* Insert 15 after the first node */
    struct node *insert = create_node(15);

    if (insert == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free_list(head);
        return 1;
    }

    insert->next = first->next;
    first->next = insert;

    /* Insert 5 at the beginning */
    struct node *new_head = create_node(5);

    if (new_head == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free_list(head);
        return 1;
    }

    new_head->next = head;
    head = new_head;

    print_list(head);

    free_list(head);
    head = NULL;

    return 0;
}

struct node *create_node(int data)
{
    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->data = data;
    new_node->next = NULL;

    return new_node;
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