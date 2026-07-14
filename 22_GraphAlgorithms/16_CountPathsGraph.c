#include <stdio.h>

int graph[4][4]=
{
    {0,1,1,0},
    {0,0,1,1},
    {0,0,0,1},
    {0,0,0,0}
};

int count=0;

void DFS(int start,int end)
{
    if(start==end)
    {
        count++;
        return;
    }

    for(int i=0;i<4;i++)
    {
        if(graph[start][i])
            DFS(i,end);
    }
}

int main()
{
    DFS(0,3);

    printf("Number of Paths: %d",count);

    return 0;
}