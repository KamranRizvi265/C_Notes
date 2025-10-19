#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node * create_node(int val)
{
    Node *n;
    n = (Node *) malloc(sizeof(Node));
    n->data = val;
    return n;
}

int main()
{
    Node *p,*p1,*p2,*p3,*p4,*p6;

    p = create_node(2);
    p1 = create_node(1);
    p2 = create_node(4);
    p3 = create_node(11);
    p4 = create_node(12);
    p6 = create_node(3);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = NULL;
    p2->right = p6;

    p3->left = NULL;
    p3->right = NULL;

    p4->left = NULL;
    p4->right = NULL;

    p6->left = NULL;
    p6->right = NULL;

    return 0;
}