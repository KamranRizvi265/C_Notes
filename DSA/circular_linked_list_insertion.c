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
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;

    while(ptr != head)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

Node* insertion_beginning(Node *head, int val)
{
    printf("\nInserting %d at the beginning of the linked list.\n", val);

    Node *ptr = (Node *) malloc(sizeof(Node));
    ptr->next = head; // Point new node to the current head
    ptr->data = val; // Assign value to new node

    Node *q = head;
    while(q->next != head) // Find the last node
    {
        q = q->next;
    }
    q->next = ptr; // Link last node to new node

    return ptr; // Return new head of the list
}

Node * insertion_between(Node *head, int val, int index)
{
    printf("\nInserting %d at index %d in the linked list.\n", val, index);
    Node *ptr = (Node *) malloc(sizeof(Node));
    Node *p = head;
    int i = 0;
    
    while( i != (index-1) )
    {
        p = p->next;
        i++;
    }

    ptr->data = val;     // Assign value to new node
    ptr->next = p->next; // Link new node to next node
    p->next = ptr;       // Insert new node after p

    return head; // Return unchanged head
}

Node * insertion_end(Node *head, int val)
{
    printf("\nInserting %d at the end of the linked list.\n", val);
    Node *ptr = (Node*) malloc(sizeof(Node));
    Node *p = head;
    ptr->data = val;  // Assign value to new node

    while( p->next != head )
    {
        p = p->next;  // Traverse to the end of the list
    }
    p->next = ptr;    // Link last node to new node
    ptr->next = head; // New node points to head

    return head;
}

void insertion_after_node(Node *prevNode, int val)
{
    printf("\nInserting %d after node in linked list.\n", val);
    Node *ptr = (Node*) malloc(sizeof(Node));

    ptr->data = val;            // Assign value to new node
    ptr->next = prevNode->next; // Link new node to next node
    prevNode->next = ptr;       // Link previous node to new node
    
}

int main()
{
    Node *head, *first, *second, *third;

    head= (Node *) malloc(sizeof(Node));
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
    third->next = head;

    traversal(head);

    // Insertion at the beginning
    head = insertion_beginning(head, -1);
    traversal(head);

    // Insertion in between
    head = insertion_between(head, 25, 1);
    traversal(head);

    // Insertion at the end
    head = insertion_end(head, 56);
    traversal(head);

    // Insertion after a node
    insertion_after_node(second, 99);
    traversal(head);

    return 0;
}