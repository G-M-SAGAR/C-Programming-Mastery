#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    printf("Loop Removal Algorithm:\n");
    printf("1. Detect loop using Floyd's Algorithm.\n");
    printf("2. Move one pointer to head.\n");
    printf("3. Move both one step.\n");
    printf("4. Previous node's next=NULL.\n");

    return 0;
}