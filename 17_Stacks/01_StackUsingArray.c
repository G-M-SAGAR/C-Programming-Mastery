#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    printf("Stack Created Successfully.\n");
    printf("Maximum Size = %d\n", MAX);
    printf("Top = %d\n", top);

    return 0;
}