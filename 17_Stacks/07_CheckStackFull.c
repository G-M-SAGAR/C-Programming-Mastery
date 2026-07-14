#include <stdio.h>

#define MAX 5

int stack[MAX] = {10,20,30,40,50};
int top = 4;

int main()
{
    if(top == MAX - 1)
    {
        printf("Stack is Full.\n");
    }
    else
    {
        printf("Stack is Not Full.\n");
    }

    return 0;
}