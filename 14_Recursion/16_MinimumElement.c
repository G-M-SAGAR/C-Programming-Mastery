#include <stdio.h>

int minimum(int arr[], int n)
{
    if(n == 1)
        return arr[0];

    int min = minimum(arr, n - 1);

    if(arr[n - 1] < min)
        return arr[n - 1];

    return min;
}

int main()
{
    int arr[] = {45, 12, 98, 23, 76, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nMinimum = %d\n", minimum(arr, size));

    return 0;
}