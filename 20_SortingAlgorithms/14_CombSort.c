#include <stdio.h>

int getGap(int gap)
{
    gap = (gap * 10) / 13;

    if(gap < 1)
        return 1;

    return gap;
}

int main()
{
    int arr[] = {8,4,1,56,3,-44,23,-6,28,0};
    int n = 10;

    int gap = n;
    int swapped = 1;

    while(gap != 1 || swapped)
    {
        gap = getGap(gap);
        swapped = 0;

        for(int i = 0; i < n - gap; i++)
        {
            if(arr[i] > arr[i + gap])
            {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                swapped = 1;
            }
        }
    }

    printf("Sorted Array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}