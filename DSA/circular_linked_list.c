#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void traversal(Node *head)
{
    Node *ptr = head;
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;

    while(ptr != head)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    Node *head, *first, *second, *third;

    head= (Node *) malloc(sizeof(Node));
    first = (Node *) malloc(sizeof(Node));
    second = (Node *) malloc(sizeof(Node));
    third = (Node *) malloc(sizeof(Node));

    head->data = 0;
    head->next = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = head;

    traversal(head);

    return 0;
}