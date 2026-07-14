#include <stdio.h>

int graph[6][6] =
{
    {0,1,1,0,0,0},
    {0,0,0,1,0,0},
    {0,0,0,1,1,0},
    {0,0,0,0,0,1},
    {0,0,0,0,0,1},
    {0,0,0,0,0,0}
};

int visited[6];

void DFS(int v)
{
    visited[v]=1;

    for(int i=0;i<6;i++)
        if(graph[v][i] && !visited[i])
            DFS(i);

    printf("%d ",v);
}

int main()
{
    printf("Topological Sort:\n");

    for(int i=0;i<6;i++)
        if(!visited[i])
            DFS(i);

    return 0;
}