#include <stdio.h>

#define MAX 10

int arr[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int value)
{
    if(top1 + 1 == top2)
    {
        printf("Overflow\n");
        return;
    }

    arr[++top1] = value;
}

void push2(int value)
{
    if(top1 + 1 == top2)
    {
        printf("Overflow\n");
        return;
    }

    arr[--top2] = value;
}

int main()
{
    push1(10);
    push1(20);

    push2(100);
    push2(200);

    printf("Stack1:\n");

    for(int i = top1; i >= 0; i--)
        printf("%d\n", arr[i]);

    printf("\nStack2:\n");

    for(int i = top2; i < MAX; i++)
        printf("%d\n", arr[i]);

    return 0;
}