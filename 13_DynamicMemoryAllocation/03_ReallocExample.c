#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    arr = (int *)malloc(3 * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < 3; i++)
    {
        arr[i] = i + 1;
    }

    arr = (int *)realloc(arr, 6 * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    for(i = 3; i < 6; i++)
    {
        arr[i] = i + 1;
    }

    printf("Array Elements:\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}