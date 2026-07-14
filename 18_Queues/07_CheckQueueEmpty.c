#include <stdio.h>

int main()
{
    int front = -1;
    int rear = -1;

    if(front == -1 || front > rear)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("Queue is Not Empty.\n");
    }

    return 0;
}