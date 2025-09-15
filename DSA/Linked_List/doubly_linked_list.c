#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node Node;

void traversal(Node *head)
{
    Node *ptr = head;

    while(ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    Node *head, *first, *second, *third;
    head = (Node *) malloc(sizeof(Node));
    first = (Node *) malloc(sizeof(Node));
    second = (Node *) malloc(sizeof(Node));
    third = (Node *) malloc(sizeof(Node));

    head->data = 0;
    head->prev = NULL;
    head->next = first;

    first->data = 1;
    first->prev = head;
    first->next = second;

    second->data = 2;
    second->prev = first;
    second->next = third;

    third->data = 3;
    third->prev = second;
    third->next = NULL;

    traversal(head);

    return 0;
}