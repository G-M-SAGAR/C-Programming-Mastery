#include <stdio.h>

int main()
{
    int graph[5][5] =
    {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };

    int visited[5] = {0};
    int queue[10];

    int front = 0;
    int rear = 0;

    queue[rear++] = 0;
    visited[0] = 1;

    printf("BFS Traversal:\n");

    while(front < rear)
    {
        int vertex = queue[front++];

        printf("%d ", vertex);

        for(int i = 0; i < 5; i++)
        {
            if(graph[vertex][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}