#include <stdio.h>

#define MAX 5

int stack[MAX] = {10,20,30};
int top = 2;

int pop()
{
    if(top == -1)
    {
        printf("Stack Underflow!\n");
        return -1;
    }

    return stack[top--];
}

void display()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
        return;
    }

    printf("Stack:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    printf("Popped Element = %d\n", pop());

    display();

    return 0;
}