#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key)
{
    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int exponentialSearch(int arr[], int n, int key)
{
    if(arr[0] == key)
        return 0;

    int i = 1;

    while(i < n && arr[i] <= key)
        i *= 2;

    return binarySearch(arr, i / 2, (i < n) ? i : n - 1, key);
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int key = 80;

    int result = exponentialSearch(arr, n, key);

    if(result != -1)
        printf("%d Found at Position %d\n", key, result + 1);
    else
        printf("Element Not Found\n");

    return 0;
}