#include <stdio.h>

#define MAX 5

int queue[MAX] = {10, 20, 30, 40};
int front = 0;
int rear = 3;

int main()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("Queue Elements:\n");

        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }

    return 0;
}