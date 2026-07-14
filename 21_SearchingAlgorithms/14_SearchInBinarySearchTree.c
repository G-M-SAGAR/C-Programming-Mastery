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

struct Node* search(struct Node *root, int key)
{
    if(root == NULL || root->data == key)
        return root;

    if(key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main()
{
    struct Node *root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);
    root->left->left = createNode(20);
    root->left->right = createNode(40);

    int key = 40;

    if(search(root, key))
        printf("%d Found in BST\n", key);
    else
        printf("%d Not Found\n", key);

    return 0;
}