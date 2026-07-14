#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list;
    int n, i;

    printf("How many integers? ");
    scanf("%d", &n);

    list = (int *)malloc(n * sizeof(int));

    if(list == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printf("\nInteger List:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    printf("\n");

    free(list);

    return 0;
}