#include <stdio.h>

int main()
{
    int arr[] = {29, 10, 14, 37, 13};
    int n = 5;

    for(int i = 0; i < n - 1; i++)
    {
        int max = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[max])
                max = j;
        }

        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }

    printf("Sorted Array (Descending):\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}