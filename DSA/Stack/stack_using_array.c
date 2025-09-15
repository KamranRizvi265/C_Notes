#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

typedef struct Stack Stack;

int isEmpty(Stack *s)
{
    if(s->top == -1)
    {
        return 1;
    }

    return 0;
}

int isFull(Stack *s)
{
    if(s->top == s->size - 1)
    {
        return 1;
    }

    return 0;
}

int main()
{
    // Stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    Stack *s;
    s = (Stack *) malloc(sizeof(Stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    if(isEmpty(s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }

    if(isFull(s))
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");
    }

    // Pushing Manually
    s->arr[0] = 7;
    s->top++;

    if(isEmpty(s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }

    if(isFull(s))
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");
    }

    return 0;
}