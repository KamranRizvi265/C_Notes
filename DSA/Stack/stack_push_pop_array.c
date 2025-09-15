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

void traversal(Stack *ptr)
{
    if(isEmpty(ptr))
    {
        return;
    }

    for(int i=0; i<=ptr->top; i++)
    {
        printf("Element: %d\n",ptr->arr[i]);
    }
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

int main()
{
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    traversal(s);

    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);

    traversal(s);

    push(s, 60);
    push(s, 70);
    push(s, 80);
    push(s, 90);
    push(s, 100);
    push(s, 110);

    traversal(s);

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);

    traversal(s);

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);

    return 0;
}