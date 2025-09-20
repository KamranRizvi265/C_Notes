#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
};

typedef struct Node Node;

void traversal(Node *head) {
  Node *ptr = head;
  printf("\nPrinting Doubly Linked List:\n");
  while (ptr != NULL) {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  }
}

Node *insertion_beginning(Node *head, int val) {
  printf("\nInserting %d at the beginning of the linked list.\n", val);
  Node *ptr = (Node *)malloc(sizeof(Node));
  ptr->data = val;
  ptr->prev = NULL;
  ptr->next = head;
  if (head != NULL) {
    head->prev = ptr;
  }
  return ptr;
}

void insertion_between(Node *head, int val, int index) {
  printf("\nInserting %d at index %d in the linked list.\n", val, index);
  Node *ptr = (Node *)malloc(sizeof(Node));
  Node *p = head;
  int i = 0;
  while (i != (index - 1)) {
    p = p->next;
    i++;
  }
  ptr->data = val;
  ptr->next = p->next;
  p->next = ptr;
  ptr->prev = p;
  if (ptr->next != NULL) {
    ptr->next->prev = ptr;
  }
}

void insertion_end(Node *head, int val) {
  printf("\nInserting %d at the end of the linked list.\n", val);
  Node *ptr = (Node *)malloc(sizeof(Node));
  Node *p = head;
  ptr->data = val;
  while (p->next != NULL) {
    p = p->next;
  }
  p->next = ptr;
  ptr->prev = p;
  ptr->next = NULL;
}

void insertion_after_node(Node *prevNode, int val) {
  printf("\nInserting %d after a given node in the linked list.\n", val);
  Node *ptr = (Node *)malloc(sizeof(Node));
  ptr->data = val;
  ptr->next = prevNode->next;
  prevNode->next = ptr;
  ptr->prev = prevNode;
  if (ptr->next != NULL) {
    ptr->next->prev = ptr;
  }
}

Node *delete_first(Node *head) {
  printf("\nDeleting the first element: %d\n", head->data);
  Node *ptr = head;
  head = head->next;
  if (head != NULL) {
    head->prev = NULL;
  }
  free(ptr);
  return head;
}

void delete_index(Node *head, int index) {
  printf("\nDeletion at index: %d\n", index);
  Node *p = head;
  int i = 0;
  while (i < index) {
    p = p->next;
    i++;
  }
  p->prev->next = p->next;
  if (p->next != NULL) {
    p->next->prev = p->prev;
  }
  free(p);
}

void delete_last(Node *head) {
  printf("\nDeleting the last element\n");
  Node *p = head;
  while (p->next != NULL) {
    p = p->next;
  }
  p->prev->next = NULL;
  free(p);
}

void delete_value(Node *head, int value) {
  printf("\nDeleting node with value: %d\n", value);
  Node *p = head;
  while (p != NULL && p->data != value) {
    p = p->next;
  }
  if (p == NULL) {
    printf("Value not found in the list.\n");
    return;
  }
  if (p->prev != NULL) {
    p->prev->next = p->next;
  }
  if (p->next != NULL) {
    p->next->prev = p->prev;
  }
  free(p);
}

int main() {
  Node *head, *second, *third, *fourth;
  head = (Node *)malloc(sizeof(Node));
  second = (Node *)malloc(sizeof(Node));
  third = (Node *)malloc(sizeof(Node));
  fourth = (Node *)malloc(sizeof(Node));

  head->data = 1;
  head->prev = NULL;
  head->next = second;

  second->data = 2;
  second->prev = head;
  second->next = third;

  third->data = 3;
  third->prev = second;
  third->next = fourth;

  fourth->data = 4;
  fourth->prev = third;
  fourth->next = NULL;

  traversal(head);

  head = insertion_beginning(head, 0);
  traversal(head);

  insertion_between(head, 25, 2);
  traversal(head);

  insertion_end(head, 56);
  traversal(head);

  insertion_after_node(second, 99);
  traversal(head);

  head = delete_first(head);
  traversal(head);

  delete_index(head, 2);
  traversal(head);

  delete_last(head);
  traversal(head);

  delete_value(head, 3);
  traversal(head);

  return 0;
}