#include <stdio.h>

int graph[4][4] =
{
    {0,1,0,0},
    {0,0,1,0},
    {0,0,0,1},
    {1,0,0,0}
};

int visited[4];
int stack[4];

int cycle(int v)
{
    if(stack[v])
        return 1;

    if(visited[v])
        return 0;

    visited[v] = 1;
    stack[v] = 1;

    for(int i=0;i<4;i++)
    {
        if(graph[v][i] && cycle(i))
            return 1;
    }

    stack[v]=0;

    return 0;
}

int main()
{
    if(cycle(0))
        printf("Cycle Detected\n");
    else
        printf("No Cycle\n");

    return 0;
}