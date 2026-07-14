#include <stdio.h>

#define V 4

int main()
{
    int graph[V][V] =
    {
        {0,5,999,10},
        {999,0,3,999},
        {999,999,0,1},
        {999,999,999,0}
    };

    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(graph[i][k]+graph[k][j] < graph[i][j])
                    graph[i][j]=graph[i][k]+graph[k][j];
            }
        }
    }

    printf("Shortest Path Matrix:\n");

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
            printf("%d ",graph[i][j]);

        printf("\n");
    }

    return 0;
}