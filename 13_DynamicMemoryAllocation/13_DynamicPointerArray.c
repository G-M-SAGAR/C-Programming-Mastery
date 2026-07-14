#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int **ptr;

    ptr = (int **)malloc(n * sizeof(int *));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int));

        printf("Enter value %d: ", i + 1);
        scanf("%d", ptr[i]);
    }

    printf("\nValues:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *ptr[i]);
        free(ptr[i]);
    }

    free(ptr);

    return 0;
}