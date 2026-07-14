#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    if(top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Stack is Not Empty.\n");
    }

    return 0;
}