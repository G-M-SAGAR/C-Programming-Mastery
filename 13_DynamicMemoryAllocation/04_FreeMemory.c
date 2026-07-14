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

    *ptr = 500;

    printf("Before Free = %d\n", *ptr);

    free(ptr);

    ptr = NULL;

    if(ptr == NULL)
    {
        printf("Memory released successfully.\n");
    }

    return 0;
}