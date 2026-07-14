#include <stdio.h>

int main()
{
    int distance[5]={0,1,2,3,4};

    printf("Shortest Distance from Source:\n");

    for(int i=0;i<5;i++)
        printf("Vertex %d = %d\n",i,distance[i]);

    return 0;
}