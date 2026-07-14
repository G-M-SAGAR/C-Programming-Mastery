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

void printLevel(struct Node *root, int level)
{
    if(root == NULL)
        return;

    if(level == 1)
        printf("%d ", root->data);
    else
    {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

int height(struct Node *root)
{
    if(root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return (left > right ? left : right) + 1;
}

void levelOrder(struct Node *root)
{
    int h = height(root);

    for(int i = 1; i <= h; i++)
        printLevel(root, i);
}

int main()
{
    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    printf("Level Order Traversal:\n");
    levelOrder(root);

    return 0;
}