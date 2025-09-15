#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

int isEmpty(Node *ptr)
{
    if(ptr == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(Node *ptr)
{
    Node *new = (Node*) malloc(sizeof(Node));
    if(new == NULL)
    {
        return 1;
    }
    free(new);
    return 0;
}

Node* push(Node *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow...\n");
        return ptr;
    }
    Node *new = (Node*) malloc(sizeof(Node));
    new->data = value;
    new->next = ptr;

    return new;
}

void peek(Node *ptr, int pos)   // Position (pos) starts from 1
{
    if(isEmpty(ptr))  // Check if stack is empty
    {
        printf("Stack is empty...\n");
        return;
    }

    for(int i=0; (i<pos-1 && ptr!=NULL); i++)  // Traverse to the desired position
    {
        ptr = ptr->next;
    }

    if(ptr != NULL)  // If the desired position is found
    {
        printf("Value at position %d is: %d\n", pos, ptr->data);
    }
    else
    {
        printf("Invalid position...\n");
    }
}

int main()
{
    Node *top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);
    top = push(top, 60);

    for(int i=1; i<=6; i++)
    {
        peek(top, i);
    }

    return 0;
}