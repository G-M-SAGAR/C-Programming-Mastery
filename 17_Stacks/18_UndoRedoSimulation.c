#include <stdio.h>

#define MAX 10

char *actions[MAX] =
{
    "Type A",
    "Type B",
    "Delete B"
};

int top = 2;

int main()
{
    printf("Undo : %s\n", actions[top]);

    top--;

    printf("Current Action : %s\n", actions[top]);

    top++;

    printf("Redo : %s\n", actions[top]);

    return 0;
}