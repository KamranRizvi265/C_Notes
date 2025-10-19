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
    n->left = NULL;
    n->right = NULL;
    n->data = val;
    return n;
}

void postOrder(Node *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    // Tree
    //          2
    //         / \
    //        1   4
    //       / \   \
    //      11  12  3  

    Node *p,*p1,*p2,*p3,*p4,*p6;

    // Creating Nodes
    p = create_node(2);
    p1 = create_node(1);
    p2 = create_node(4);
    p3 = create_node(11);
    p4 = create_node(12);
    p6 = create_node(3);

    // Linking Nodes
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

    postOrder(p);

    return 0;
}