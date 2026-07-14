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

    queue[++rear] = value;
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted = %d\n", queue[front++]);
}

void display()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Queue: ");

    for(int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
    int choice, value;

    do
    {
        printf("\n===== QUEUE MENU =====\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}