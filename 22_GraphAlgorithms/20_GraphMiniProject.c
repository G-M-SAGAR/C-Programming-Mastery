#include <stdio.h>

int main()
{
    int graph[5][5]=
    {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };

    printf("Graph Mini Project\n\n");

    printf("Adjacency Matrix:\n");

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            printf("%d ",graph[i][j]);

        printf("\n");
    }

    printf("\nGraph processing completed.");

    return 0;
}