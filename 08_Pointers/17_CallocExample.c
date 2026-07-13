#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("\nInitial Values:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}