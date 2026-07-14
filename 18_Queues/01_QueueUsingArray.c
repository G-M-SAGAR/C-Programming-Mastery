#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int main()
{
    printf("Queue Created Successfully.\n");
    printf("Maximum Size = %d\n", MAX);
    printf("Front = %d\n", front);
    printf("Rear = %d\n", rear);

    return 0;
}