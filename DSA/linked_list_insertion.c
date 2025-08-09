#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    printf("\nPrinting linked list:\n");
    while( ptr != NULL )
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertion_beginning(struct Node *head, int val)
{
    printf("\nInserting %d at the beginning of the linked list.", val);

    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = head; // Point new node to the current head
    ptr->data = val; // Assign value to new node

    return ptr; // Return new head of the list
}

void insertion_between(struct Node *head, int val, int index)
{
    printf("\nInserting %d at index %d in the linked list.", val, index);
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    
    while( i != (index-1) )
    {
        p = p->next;
        i++;
    }

    ptr->data = val;     // Assign value to new node
    ptr->next = p->next; // Link new node to next node
    p->next = ptr;       // Insert new node after p
}

void insertion_end(struct Node *head, int val)
{
    printf("\nInserting %d at the end of the linked list.", val);
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = val;  // Assign value to new node

    while( p->next != NULL )
    {
        p = p->next;  // Traverse to the end of the list
    }
    p->next = ptr;    // Link last node to new node
    ptr->next = NULL; // New node is now the last node
}

void insertion_after_node(struct Node *prevNode, int val)
{
    printf("\nInserting %d after node in linked list.", val);
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));

    ptr->data = val;            // Assign value to new node
    ptr->next = prevNode->next; // Link new node to next node
    prevNode->next = ptr;       // Link previous node to new node
    
}

int main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    // Assign data to nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    // Print the linked list
    traversal(head);

    // Insertion at the beginning
    head = insertion_beginning(head, 0);
    traversal(head);

    // Insertion in between
    insertion_between(head, 25, 1);
    traversal(head);

    // Insertion at the end
    insertion_end(head, 56);
    traversal(head);

    // Insertion after a node
    insertion_after_node(second, 99);
    traversal(head);

    return 0;
}