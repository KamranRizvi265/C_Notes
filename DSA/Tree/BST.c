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

void inOrder(Node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(Node *root)
{
    static Node *prev = NULL;
    if(root != NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;

        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    // Binary Search Tree
    //          9
    //         / \
    //        4   11
    //       / \    \
    //      2   7    15
    //         / \   /
    //        5   8 14

    Node *p,*p1,*p2,*p3,*p4,*p6,*p9,*p10,*p13;

    // Creating Nodes
    p = create_node(9);
    p1 = create_node(4);
    p2 = create_node(11);
    p3 = create_node(2);
    p4 = create_node(7);
    p6 = create_node(15);
    p9 = create_node(5);
    p10 = create_node(8);
    p13 = create_node(14);

    // Linking Nodes
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = NULL;
    p2->right = p6;

    p3->left = NULL;
    p3->right = NULL;

    p4->left = p9;
    p4->right = p10;

    p6->left = p13;
    p6->right = NULL;

    p9->left = NULL;
    p9->right = NULL;

    p10->left = NULL;
    p10->right = NULL;

    p13->left = NULL;
    p13->right = NULL;

    inOrder(p);

    if(isBST(p))
    {
        printf("\nTree is BST");
    }
    else
    {
        printf("\nTree is not BST");
    }

    return 0;
}