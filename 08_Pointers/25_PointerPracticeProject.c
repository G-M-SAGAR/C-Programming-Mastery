#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;
    int i;
    int sum = 0;
    int largest;

    printf("Enter number of elements: ");
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
    }

    largest = arr[0];

    for(i = 0; i < n; i++)
    {
        sum += arr[i];

        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("\nArray Elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Sum = %d\n", sum);
    printf("Largest = %d\n", largest);

    free(arr);

    return 0;
}