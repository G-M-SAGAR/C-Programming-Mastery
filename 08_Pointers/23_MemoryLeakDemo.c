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

    printf("Value = %d\n", *ptr);

    printf("\nFreeing allocated memory...\n");

    free(ptr);

    ptr = NULL;

    printf("Memory released successfully.\n");

    return 0;
}