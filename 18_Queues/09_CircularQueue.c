#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if((rear + 1) % MAX == front)
    {
        printf("Circular Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear = (rear + 1) % MAX;
    queue[rear] = value;
}

void display()
{
    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    int i = front;

    printf("Circular Queue:\n");

    while(1)
    {
        printf("%d ", queue[i]);

        if(i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    return 0;
}