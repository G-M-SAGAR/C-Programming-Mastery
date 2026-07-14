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
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int height(struct Node *root)
{
    if(root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return (left > right ? left : right) + 1;
}

int isBalanced(struct Node *root)
{
    if(root == NULL)
        return 1;

    int left = height(root->left);
    int right = height(root->right);

    if(abs(left - right) > 1)
        return 0;

    return isBalanced(root->left) && isBalanced(root->right);
}

int main()
{
    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);

    if(isBalanced(root))
        printf("Tree is Balanced\n");
    else
        printf("Tree is Not Balanced\n");

    return 0;
}