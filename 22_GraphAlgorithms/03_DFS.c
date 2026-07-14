#include <stdio.h>

int graph[5][5] =
{
    {0,1,1,0,0},
    {1,0,1,1,0},
    {1,1,0,0,1},
    {0,1,0,0,1},
    {0,0,1,1,0}
};

int visited[5];

void DFS(int vertex)
{
    printf("%d ", vertex);

    visited[vertex] = 1;

    for(int i = 0; i < 5; i++)
    {
        if(graph[vertex][i] && !visited[i])
            DFS(i);
    }
}

int main()
{
    printf("DFS Traversal:\n");

    DFS(0);

    return 0;
}