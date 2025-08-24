#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

typedef struct Stack Stack;

int isEmpty(Stack *ptr)
{
    if(ptr->top == -1)
    {
        printf("Stack is empty...\n");
        return 1;
    }

    return 0;
}

int isFull(Stack *ptr)
{
    if(ptr->top == ptr->size -1)
    {
        printf("Stack is full...\n");
        return 1;
    }

    return 0;
}

void push(Stack *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow...\n");
        return;
    }

    ptr->top++;
    ptr->arr[ptr->top] = value;
}

void pop(Stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow...\n");
        return;
    }

    ptr->top--;
}

void peek(Stack *ptr, int pos)
{
    if(isEmpty(ptr))
    {
        return;
    }

    int arrayInd = (ptr->top) - pos + 1;
    if(arrayInd < 0)
    {
        printf("Invalid Position...\n");
        return;
    }
    printf("Value at position %d is %d\n", pos, ptr->arr[arrayInd] );
}

int main()
{
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    push(s, 70);
    push(s, 80);
    push(s, 90);
    push(s, 100);
    push(s, 110); // Stack Overflow

    for(int j = 1; j <= s->top+1; j++)
    {
        peek(s, j);
    }

    pop(s);
    pop(s);

    for(int j = 1; j <= s->top+1; j++)
    {
        peek(s, j);
    }

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);

    for(int j = 1; j <= s->top+1; j++)
    {
        peek(s, j);
    }

    return 0;
}