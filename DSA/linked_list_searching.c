#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void traversal(Node *head)
{
    Node *ptr = head;
    while( ptr!= NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void search(Node *head, int value)
{
    printf("\nSearching for value: %d\n", value);
    Node *ptr = head;
    int index = 0;
    while( ptr != NULL)
    {
        if(ptr->data == value)
        {
            printf("Found element: %d\n", ptr->data);
            printf("At index: %d\n", index);
            return;
        }
        ptr = ptr->next;
        index++;
    }
    printf("Element not found\n");
}

int main()
{
    Node *head, *first, *second, *third;

    head = (Node *) malloc(sizeof(Node));
    first = (Node *) malloc(sizeof(Node));
    second = (Node *) malloc(sizeof(Node));
    third = (Node *) malloc(sizeof(Node));

    head->data = 0;
    head->next = first;

    first->data = 1;
    first->next = second;
    
    second->data = 2;
    second->next = third; 

    third->data = 3;
    third->next = NULL;

    traversal(head);

    // Searching for a value
    search(head, 22);

    return 0;
}