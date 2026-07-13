#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL)
    {
        printf("Allocation Failed!\n");
        return 1;
    }

    *ptr = 500;

    printf("Stored Value = %d\n", *ptr);

    free(ptr);

    ptr = NULL;

    if(ptr == NULL)
    {
        printf("Memory Freed Successfully.\n");
    }

    return 0;
}