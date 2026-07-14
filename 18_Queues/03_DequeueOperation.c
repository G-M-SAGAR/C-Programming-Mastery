#include <stdio.h>

#define MAX 5

int queue[MAX] = {10,20,30};
int front = 0;
int rear = 2;

void dequeue()
{
    if(front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted Element = %d\n", queue[front]);
    front++;
}

void display()
{
    if(front > rear)
    {
        printf("Queue Empty\n");
        return;
    }

    for(int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
    dequeue();

    display();

    return 0;
}