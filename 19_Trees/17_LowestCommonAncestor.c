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

struct Node* LCA(struct Node *root, int n1, int n2)
{
    if(root == NULL)
        return NULL;

    if(root->data > n1 && root->data > n2)
        return LCA(root->left, n1, n2);

    if(root->data < n1 && root->data < n2)
        return LCA(root->right, n1, n2);

    return root;
}

int main()
{
    struct Node *root = createNode(20);
    root->left = createNode(10);
    root->right = createNode(30);
    root->left->left = createNode(5);
    root->left->right = createNode(15);

    struct Node *ans = LCA(root, 5, 15);

    printf("Lowest Common Ancestor = %d\n", ans->data);

    return 0;
}