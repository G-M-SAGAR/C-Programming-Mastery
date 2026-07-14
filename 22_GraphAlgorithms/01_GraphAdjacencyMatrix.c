#include <stdio.h>

int main()
{
    int vertices = 5;

    int graph[5][5] =
    {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };

    printf("Graph Adjacency Matrix:\n\n");

    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < vertices; j++)
        {
            printf("%d ", graph[i][j]);
        }

        printf("\n");
    }

    return 0;
}