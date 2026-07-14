#include <stdio.h>

int arraySum(int arr[], int n)
{
    if(n == 0)
        return 0;

    return arr[n - 1] + arraySum(arr, n - 1);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Sum = %d\n", arraySum(arr, size));

    return 0;
}