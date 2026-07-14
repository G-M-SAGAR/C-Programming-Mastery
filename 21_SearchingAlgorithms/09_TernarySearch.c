#include <stdio.h>

int ternarySearch(int arr[], int left, int right, int key)
{
    while(left <= right)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if(arr[mid1] == key)
            return mid1;

        if(arr[mid2] == key)
            return mid2;

        if(key < arr[mid1])
            right = mid1 - 1;
        else if(key > arr[mid2])
            left = mid2 + 1;
        else
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int key = 30;

    int result = ternarySearch(arr, 0, n - 1, key);

    if(result != -1)
        printf("%d Found at Position %d\n", key, result + 1);
    else
        printf("Element Not Found\n");

    return 0;
}