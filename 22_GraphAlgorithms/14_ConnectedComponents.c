#include <stdio.h>

int graph[5][5]=
{
    {0,1,0,0,0},
    {1,0,0,0,0},
    {0,0,0,1,0},
    {0,0,1,0,1},
    {0,0,0,1,0}
};

int visited[5];

void DFS(int v)
{
    visited[v]=1;

    printf("%d ",v);

    for(int i=0;i<5;i++)
    {
        if(graph[v][i] && !visited[i])
            DFS(i);
    }
}

int main()
{
    int count=0;

    printf("Connected Components:\n");

    for(int i=0;i<5;i++)
    {
        if(!visited[i])
        {
            count++;
            DFS(i);
            printf("\n");
        }
    }

    printf("Total Components: %d",count);

    return 0;
}