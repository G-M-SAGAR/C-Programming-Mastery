#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nArray Elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %d\n", sum);

    free(arr);

    return 0;
}