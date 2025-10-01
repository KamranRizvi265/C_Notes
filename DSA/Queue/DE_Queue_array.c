#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

typedef struct Queue Queue;

int isEmpty(Queue *q)
{
    if(q->front==-1)
    {
        return 1;
    }
    return 0;
}

int isFull(Queue *q)
{
    if(q->rear == q->size-1)
    {
        return 1;
    }
    return 0;
}

void enqueueF(Queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue Overflow...\n");
        return;
    }

    printf("Enqueued %d to front\n", val);
    if(q->front == -1)
    {
        q->front++;
        q->rear++;
        q->arr[q->front] = val;
    }
    else
    {
        q->front--;
        q->arr[q->front] = val;
    }
}

void enqueueR(Queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue Overflow...\n");
        return;
    }

    printf("Enqueued %d to rear\n", val);
    if(q->front == -1)
    {
        q->front++;
    }

    q->rear++;
    q->arr[q->rear] = val;
}

void dequeueF(Queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue Underflow...\n");
        return;
    }

    printf("Dequeued %d from front\n", q->arr[q->front]);
    if(q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
        return;
    }
    q->front++;
}

void dequeueR(Queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue Underflow...\n");
        return;
    }

    printf("Dequeued %d from rear\n", q->arr[q->rear]);
    if(q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
        return;
    }
    q->rear--;
}

void traversal(Queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue is empty...\n");
        return;
    }

    printf("Queue: ");
    for(int i=q->front; i<=q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main()
{
    Queue *q = (Queue *) malloc(sizeof(Queue));
    q->size = 5;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *) malloc(q->size * sizeof(int));

    traversal(q);

    enqueueF(q, 10);
    enqueueR(q, 20);
    enqueueF(q, 30);
    enqueueR(q, 40);

    traversal(q);

    dequeueF(q);
    dequeueR(q);
    traversal(q);

    enqueueR(q, 50);
    enqueueF(q, 60);
    traversal(q);

    return 0;
}