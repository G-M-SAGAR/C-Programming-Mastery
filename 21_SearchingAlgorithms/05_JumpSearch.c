#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int key)
{
    int step = sqrt(n);
    int prev = 0;

    while(arr[(step < n ? step : n) - 1] < key)
    {
        prev = step;
        step += sqrt(n);

        if(prev >= n)
            return -1;
    }

    while(arr[prev] < key)
    {
        prev++;

        if(prev == (step < n ? step : n))
            return -1;
    }

    if(arr[prev] == key)
        return prev;

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int key = 70;

    int result = jumpSearch(arr, n, key);

    if(result != -1)
        printf("%d Found at Position %d\n", key, result + 1);
    else
        printf("Element Not Found\n");

    return 0;
}