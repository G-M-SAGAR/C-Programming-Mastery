#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 100;

    printf("Value = %d\n", *ptr);

    printf("\nIf free(ptr) is not called, this memory becomes a memory leak.\n");

    free(ptr);

    return 0;
}