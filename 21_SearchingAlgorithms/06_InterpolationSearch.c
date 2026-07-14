#include <stdio.h>

int interpolationSearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high && key >= arr[low] && key <= arr[high])
    {
        if(low == high)
        {
            if(arr[low] == key)
                return low;
            return -1;
        }

        int pos = low + ((double)(high - low) /
                (arr[high] - arr[low])) * (key - arr[low]);

        if(arr[pos] == key)
            return pos;

        if(arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int key = 60;

    int result = interpolationSearch(arr, n, key);

    if(result != -1)
        printf("%d Found at Position %d\n", key, result + 1);
    else
        printf("Element Not Found\n");

    return 0;
}