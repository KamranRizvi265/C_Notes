#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    char *arr;
};

typedef struct Stack Stack;

int isEmpty(Stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }

    return 0;
}

int isFull(Stack *ptr)
{
    if(ptr->top == ptr->size -1)
    {
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

void parenthesis_matching(char *exp)
{
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *) malloc(s->size * sizeof(char));

    for(int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(' )
        {
            push(s, '(');
        }
        else if(exp[i] == ')' )
        {
            if(isEmpty(s))
            {
                printf("Parenthesis are not matching...\n");
                return;
            }
            pop(s);
        }
    }

    if(isEmpty(s))
    {
        printf("Parenthesis are matching...\n");
    }
    else
    {
        printf("Parenthesis are not matching...\n");
    }
}

int main()
{
    char *exp = "((a+b)*(c-d))" ;

    parenthesis_matching(exp);

    return 0;
}