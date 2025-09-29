#include "stdio.h"
#include "stdlib.h"

struct CircularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};

typedef struct CircularQueue CQueue;

int isEmpty(CQueue *cq)
{
    if(cq->front == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(CQueue *cq)
{
    if( (cq->rear+1) % cq->size == cq->front)
    {
        return 1;
    }
    return 0;
}

void enqueue(CQueue *cq, int value)
{
    if(isFull(cq))
    {
        printf("Overflow...\n");
        return;
    }

    printf("Enqueued: %d\n", value);

    if(cq->front == -1)
    {
        cq->front = 0;
    }
    cq->rear = (cq->rear + 1) % cq->size;
    cq->arr[cq->rear] = value;
}

void dequeue(CQueue *cq)
{
    if(isEmpty(cq))
    {
        printf("Underflow...\n");
        return;
    }

    printf("Dequeued: %d\n", cq->arr[cq->front]);

    if(cq->front == cq->rear)
    {
        cq->front = -1;
        cq->rear = -1;
        return;
    }
    cq->front = (cq->front + 1) % cq->size;
}

int main()
{
    CQueue *cq = (CQueue *) malloc(sizeof(CQueue));
    cq->size = 5;
    cq->front = -1;
    cq->rear = -1;
    cq->arr = (int *) malloc(cq->size * sizeof(int));

    enqueue(cq, 10);
    enqueue(cq, 20);
    enqueue(cq, 30);
    enqueue(cq, 40);
    enqueue(cq, 50);
    enqueue(cq, 60);
    
    dequeue(cq);
    enqueue(cq, 60);
    dequeue(cq);
    dequeue(cq);
    dequeue(cq);
    dequeue(cq);
    dequeue(cq);
    dequeue(cq);
    return 0;
}