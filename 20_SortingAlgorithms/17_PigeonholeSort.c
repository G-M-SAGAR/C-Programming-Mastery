#include <stdio.h>

int main()
{
    int arr[] = {8, 3, 2, 7, 4, 6, 8};
    int n = 7;

    int min = arr[0], max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    int size = max - min + 1;
    int holes[100] = {0};

    for(int i = 0; i < n; i++)
        holes[arr[i] - min]++;

    printf("Sorted Array:\n");

    for(int i = 0; i < size; i++)
    {
        while(holes[i]--)
            printf("%d ", i + min);
    }

    return 0;
}