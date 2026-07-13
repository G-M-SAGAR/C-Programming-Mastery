#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Reallocation Failed!\n");
        return 1;
    }

    printf("\nArray after Reallocation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}