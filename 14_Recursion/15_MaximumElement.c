#include <stdio.h>

int maximum(int arr[], int n)
{
    if(n == 1)
        return arr[0];

    int max = maximum(arr, n - 1);

    if(arr[n - 1] > max)
        return arr[n - 1];

    return max;
}

int main()
{
    int arr[] = {45, 12, 98, 23, 76, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nMaximum = %d\n", maximum(arr, size));

    return 0;
}