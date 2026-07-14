#include <stdio.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

int main()
{
    printf("Binary Tree Introduction\n");
    printf("Each node has:\n");
    printf("1. Data\n");
    printf("2. Left Child\n");
    printf("3. Right Child\n");

    return 0;
}