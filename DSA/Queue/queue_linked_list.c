#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

// Global pointers
Node *front = NULL;
Node *rear = NULL;

int isEmpty()
{
    if(front==NULL)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    Node *new = (Node *) malloc(sizeof(Node));
    if(new==NULL)
    {
        return 1;
    }
    free(new);
    return 0;
}

void enqueue(int value)
{
    if(isFull())
    {
        printf("Queue Overflow...\n");
        return;
    }

    printf("Enqueued: %d\n", value);
    Node *new = (Node *) malloc(sizeof(Node));
    new->data = value;
    new->next = NULL;
    
    if(front == NULL)
    {
        front = rear = new;
    }
    else
    {
        rear->next = new;
        rear = new;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue Underflow...\n");
        return;
    }

    printf("Dequeued: %d\n",front->data);
    Node *temp = front;
    front = front->next;
    free(temp);
}

void traversal()
{
    if(isEmpty(front))
    {
        printf("Queue is empty...\n");
        return;
    }

    printf("Queue: ");
    Node *ptr = front;
    
    while(ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    traversal();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    traversal();

    dequeue();
    traversal();

    return 0;
}