#include <stdio.h>

#define MAX 5

int stack[MAX] = {5,10,15,20};
int top = 3;

int main()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Top Element = %d\n", stack[top]);
    }

    return 0;
}