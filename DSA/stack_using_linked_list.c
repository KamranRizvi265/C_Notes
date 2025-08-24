#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void traversal(Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(Node *top)
{
    if(top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(Node *top)
{
    Node *new = (Node*) malloc(sizeof(Node));
    if(new == NULL)
    {
        return 1;
    }
    free(new);
    return 0;
}

Node* push(Node *top, int value)
{
    if(isFull(top))
    {
        printf("Stack Overflow...\n");
        return top;
    }

    Node *new = (Node *) malloc(sizeof(Node));
    new->data = value;
    new->next = top;

    return new;
}

Node* pop(Node *top)
{
    if(isEmpty(top))
    {
        printf("Stack Underflow...\n");
        return top;
    }

    Node *temp = top;
    int value = top->data;
    top = top->next;
    free(temp);
    printf("Popped: %d\n", value);

    return top;
}

int main()
{
    Node *top = NULL;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);

    traversal(top);

    top = pop(top);
    top = pop(top);
    top = pop(top);

    traversal(top);

    top = pop(top);
    top = pop(top);

    traversal(top);

    return 0;
}