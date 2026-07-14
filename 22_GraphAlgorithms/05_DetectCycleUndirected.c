#include <stdio.h>

int graph[5][5] =
{
    {0,1,1,0,0},
    {1,0,1,0,0},
    {1,1,0,1,0},
    {0,0,1,0,1},
    {0,0,0,1,0}
};

int visited[5];

int detectCycle(int v, int parent)
{
    visited[v] = 1;

    for(int i = 0; i < 5; i++)
    {
        if(graph[v][i])
        {
            if(!visited[i])
            {
                if(detectCycle(i,v))
                    return 1;
            }
            else if(i != parent)
                return 1;
        }
    }

    return 0;
}

int main()
{
    if(detectCycle(0,-1))
        printf("Cycle Detected\n");
    else
        printf("No Cycle\n");

    return 0;
}