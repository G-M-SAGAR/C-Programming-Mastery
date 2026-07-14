#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node));
    node->data=value;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void mirror(struct Node *root)
{
    if(root==NULL)
        return;

    struct Node *temp=root->left;
    root->left=root->right;
    root->right=temp;

    mirror(root->left);
    mirror(root->right);
}

void preorder(struct Node *root)
{
    if(root==NULL)
        return;

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct Node *root=createNode(1);

    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);

    printf("Original Tree (Preorder): ");
    preorder(root);

    mirror(root);

    printf("\nMirror Tree (Preorder): ");
    preorder(root);

    return 0;
}