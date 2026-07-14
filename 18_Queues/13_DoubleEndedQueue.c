#include <stdio.h>

#define MAX 5

int deque[MAX]={10,20,30};
int front=0;
int rear=2;

int main()
{
    printf("Deque Elements:\n");

    for(int i=front;i<=rear;i++)
    {
        printf("%d ",deque[i]);
    }

    printf("\n");

    return 0;
}