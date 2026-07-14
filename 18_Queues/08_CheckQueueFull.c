#include <stdio.h>

#define MAX 5

int main()
{
    int rear = MAX - 1;

    if(rear == MAX - 1)
    {
        printf("Queue is Full.\n");
    }
    else
    {
        printf("Queue is Not Full.\n");
    }

    return 0;
}