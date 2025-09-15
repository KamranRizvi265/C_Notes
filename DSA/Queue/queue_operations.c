#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int front;
    int rear;
    int size;
    int *arr;
};

typedef struct Queue Queue;

int isEmpty(Queue *q)
{
    if(q->front == -1 && q->rear == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(Queue *q)
{
    if(q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(Queue *q, int value)
{
    if(isFull(q))
    {
        printf("Queue Overflow...\n");
        return;
    }

    if(isEmpty(q))
    {
        q->front = 0;
    }
    q->rear++;
    q->arr[q->rear] = value;
    printf("Enqueued element: %d\n", value);
}

void dequeue(Queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue Underflow...\n");
        return;
    }

    if(q->front == q->rear)
    {
        printf("Dequeued element: %d\n", q->arr[q->front]);
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        printf("Dequeued element: %d\n", q->arr[q->front]);
        q->front++;
    }
}

int main()
{
    Queue *q = (Queue *) malloc(sizeof(Queue));
    q->size = 10;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *) malloc(q->size * sizeof(int));

    if(isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }

    enqueue(q, 10);
    enqueue(q, 20);

    dequeue(q);
    dequeue(q);
    dequeue(q);

    return 0;
}