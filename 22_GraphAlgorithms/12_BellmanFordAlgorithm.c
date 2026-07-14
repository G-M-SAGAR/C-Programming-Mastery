#include <stdio.h>

#define V 5
#define E 8

struct Edge
{
    int src, dest, weight;
};

int main()
{
    struct Edge edges[E] =
    {
        {0,1,6},
        {0,2,7},
        {1,2,8},
        {1,3,5},
        {1,4,-4},
        {2,3,-3},
        {3,1,-2},
        {4,3,7}
    };

    int distance[V];

    for(int i = 0; i < V; i++)
        distance[i] = 999;

    distance[0] = 0;

    for(int i = 1; i < V; i++)
    {
        for(int j = 0; j < E; j++)
        {
            int u = edges[j].src;
            int v = edges[j].dest;
            int w = edges[j].weight;

            if(distance[u] != 999 &&
               distance[u] + w < distance[v])
            {
                distance[v] = distance[u] + w;
            }
        }
    }

    printf("Shortest Distances:\n");

    for(int i = 0; i < V; i++)
        printf("Vertex %d = %d\n", i, distance[i]);

    return 0;
}