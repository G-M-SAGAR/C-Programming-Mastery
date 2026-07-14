#include <stdio.h>

#define MAX 10

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int value)
{
    stack1[++top1] = value;
}

void push2(int value)
{
    stack2[++top2] = value;
}

int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

void enqueue(int value)
{
    push1(value);
}

void dequeue()
{
    if(top2 == -1)
    {
        while(top1 != -1)
        {
            push2(pop1());
        }
    }

    if(top2 == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted = %d\n", pop2());
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}