#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node first;
    Node second;

    first.data = 10;
    second.data = 20;

    first.next = &second;
    second.next = NULL;

    printf("First: %d\n", first.data);
    printf("Second: %d\n", first.next->data);

    return 0;
}