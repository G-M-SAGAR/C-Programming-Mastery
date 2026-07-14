#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;

    printf("Popped = %d\n", temp->data);

    top = top->next;

    free(temp);
}

void display()
{
    struct Node *temp = top;

    while(temp)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    printf("\nAfter Pop:\n");

    display();

    return 0;
}