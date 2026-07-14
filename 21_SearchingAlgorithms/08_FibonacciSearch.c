#include <stdio.h>

int fibonacciSearch(int arr[], int n, int key)
{
    int fib2 = 0;
    int fib1 = 1;
    int fib = fib1 + fib2;

    while(fib < n)
    {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }

    int offset = -1;

    while(fib > 1)
    {
        int i = (offset + fib2 < n - 1) ? offset + fib2 : n - 1;

        if(arr[i] < key)
        {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if(arr[i] > key)
        {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else
            return i;
    }

    if(fib1 && arr[offset + 1] == key)
        return offset + 1;

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = 8;
    int key = 70;

    int result = fibonacciSearch(arr, n, key);

    if(result != -1)
        printf("%d Found at Position %d\n", key, result + 1);
    else
        printf("Element Not Found\n");

    return 0;
}