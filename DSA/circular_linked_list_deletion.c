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

Node * delete_first(Node *head)
{
    printf("\nDeleting first element: %d\n", head->data);

    Node *p = head;
    while(p->next != head)
    {
        p = p->next; // Find the last node
    }

    Node *ptr = head;  // Pointer to the first node
    head = head->next; // Move head to the next node
    p->next = head; // Link the last node to the new head
    free(ptr);  // Free the memory of the deleted node

    return head; // Return the new head of the list
}

Node * delete_index(Node *head, int index)
{
    printf("\nDeletion at index: %d\n", index);
    Node *p = head;
    Node *q = head->next;

    for(int i = 0; i<index-1; i++)  // Traverse the list to find the node before the one to delete
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next; // Link the previous node to the next node
    free(q); // Free the memory of the deleted node

    return head; // Return the head of the list
}

Node * delete_last(Node *head)
{
    printf("\nDeleting last element\n");
    Node *p = head;
    Node *q = head->next;

    while(q->next != head)  // Traverse the list until the last node
    {
        p = p->next;
        q = q->next;
    }

    p->next = head;  // Set the next of the second last node to point to the head
    free(q); // Free the memory of the last node
    
    return head; // Return the head of the list
}

Node * delete_value(Node *head, int value)
{
    printf("\nDeleting node with value: %d\n", value);
    Node *p = head;
    Node *q = head->next;
    while(q->data != value && q->next != head)  // Traverse the list until the value is found or the end is reached
    {
        p = p->next;
        q= q->next;
    }

    if(q->data == value)  // If the node with the given value is found
    {
        p->next = q->next;  // Link the previous node to the next node
        free(q); // Free the memory of the node with the given value
    }

    return head; // Return the head of the list 
}

int main()
{
    Node *head, *first, *second, *third, *fourth;

    head= (Node *) malloc(sizeof(Node));
    first = (Node *) malloc(sizeof(Node));
    second = (Node *) malloc(sizeof(Node));
    third = (Node *) malloc(sizeof(Node));
    fourth = (Node *) malloc(sizeof(Node));

    head->data = 0;
    head->next = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;

    traversal(head);

    // Deletion of first node
    head = delete_first(head);
    traversal(head);

    // Deletion at an index
    head = delete_index(head, 2);
    traversal(head);

    // Deletion of last element
    head = delete_last(head);
    traversal(head);

    // Deletion for a given value
    head = delete_value(head, 2);
    traversal(head);

    return 0;
}