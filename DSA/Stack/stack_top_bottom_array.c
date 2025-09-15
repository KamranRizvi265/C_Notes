#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int top;
    int size;
    int *arr;
};

typedef struct Stack Stack;

int isEmpty(Stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty...\n");
        return 1;
    }

    return 0;
}

void stack_bottom(Stack *s)
{
    if(isEmpty(s))
    {
        return;
    }

    printf("Bottom element: %d\n", s->arr[0]);
}

void stack_top(Stack *s)
{
    if(isEmpty(s))
    {
        return;
    }

    printf("Top element: %d\n",  s->arr[s->top]);
}

int main()
{
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int *) malloc(s->size * sizeof(int));

    s->arr[0] = 10;
    s->arr[1] = 20;
    s->arr[2] = 30;
    s->arr[3] = 40;
    s->arr[4] = 50;
    s->top = 4;

    stack_bottom(s);
    stack_top(s);

    return 0;
}