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

    *ptr = 999;

    printf("Allocated Value = %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    printf("Memory released safely.\n");

    return 0;
}