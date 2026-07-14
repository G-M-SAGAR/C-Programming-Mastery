#include <stdio.h>

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    int max = 8;
    int count[9] = {0};

    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    printf("Sorted Array:\n");

    for(int i = 0; i <= max; i++)
    {
        while(count[i]--)
            printf("%d ", i);
    }

    return 0;
}