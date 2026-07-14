#include <stdio.h>

#define MAX 5

int stack[MAX] = {10,20,30,40,50};
int top = 4;

int main()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
        return 0;
    }

    printf("Stack Elements (Top to Bottom):\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}