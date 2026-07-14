#include <stdio.h>

int main()
{
    printf("Graph Algorithm Comparison\n\n");

    printf("%-25s %-15s\n",
           "Algorithm","Complexity");

    printf("------------------------------------\n");

    printf("%-25s O(V+E)\n","DFS");
    printf("%-25s O(V+E)\n","BFS");
    printf("%-25s O(V^2)\n","Dijkstra");
    printf("%-25s O(E log V)\n","Kruskal");
    printf("%-25s O(V^2)\n","Prim");
    printf("%-25s O(V^3)\n","Floyd Warshall");

    return 0;
}