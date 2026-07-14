#include <stdio.h>

int main()
{
    int priority[] = {1,3,2,5,4};

    printf("Priority Queue:\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",priority[i]);
    }

    printf("\nHighest Priority = %d\n",5);

    return 0;
}