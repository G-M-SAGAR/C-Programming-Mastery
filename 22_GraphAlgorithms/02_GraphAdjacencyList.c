#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int vertex;
    struct Node *next;
};

struct Node *createNode(int v)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->vertex = v;
    newNode->next = NULL;

    return newNode;
}

int main()
{
    int vertices = 5;

    struct Node *graph[5];

    for(int i = 0; i < vertices; i++)
        graph[i] = NULL;

    int edges[][2] =
    {
        {0,1},
        {0,2},
        {1,3},
        {2,4},
        {3,4}
    };

    for(int i = 0; i < 5; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        struct Node *node = createNode(v);
        node->next = graph[u];
        graph[u] = node;

        node = createNode(u);
        node->next = graph[v];
        graph[v] = node;
    }

    printf("Adjacency List:\n");

    for(int i = 0; i < vertices; i++)
    {
        struct Node *temp = graph[i];

        printf("%d -> ", i);

        while(temp)
        {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }

        printf("\n");
    }

    return 0;
}