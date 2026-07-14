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
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int search(struct Node *root, int key)
{
    if(root == NULL)
        return 0;

    if(root->data == key)
        return 1;

    return search(root->left, key) || search(root->right, key);
}

int main()
{
    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    int key = 50;

    if(search(root, key))
        printf("%d Found in Tree\n", key);
    else
        printf("%d Not Found\n", key);

    return 0;
}