#include <stdio.h>

int graph[4][4]=
{
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

int color[4];

int main()
{
    for(int i=0;i<4;i++)
        color[i]=-1;

    color[0]=0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(graph[i][j])
            {
                if(color[j]==-1)
                    color[j]=1-color[i];

                else if(color[j]==color[i])
                {
                    printf("Not Bipartite");
                    return 0;
                }
            }
        }
    }

    printf("Graph is Bipartite");

    return 0;
}