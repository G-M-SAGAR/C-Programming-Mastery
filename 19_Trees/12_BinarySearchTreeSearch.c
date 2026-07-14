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
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct Node* insert(struct Node *root,int value)
{
    if(root==NULL)
        return createNode(value);

    if(value<root->data)
        root->left=insert(root->left,value);
    else
        root->right=insert(root->right,value);

    return root;
}

int search(struct Node *root,int key)
{
    if(root==NULL)
        return 0;

    if(root->data==key)
        return 1;

    if(key<root->data)
        return search(root->left,key);

    return search(root->right,key);
}

int main()
{
    struct Node *root=NULL;

    root=insert(root,50);
    root=insert(root,30);
    root=insert(root,70);
    root=insert(root,20);
    root=insert(root,40);

    if(search(root,40))
        printf("40 Found\n");
    else
        printf("40 Not Found\n");

    return 0;
}