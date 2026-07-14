#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
}

void display()
{
    printf("Queue Elements:\n");

    for(int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    return 0;
}