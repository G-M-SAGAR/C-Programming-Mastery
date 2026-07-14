#include <stdio.h>

int main()
{
    int arr[] = {34, 2, 10, -9, 7};
    int n = 5;
    int index = 0;

    while(index < n)
    {
        if(index == 0)
            index++;

        if(arr[index] >= arr[index - 1])
            index++;
        else
        {
            int temp = arr[index];
            arr[index] = arr[index - 1];
            arr[index - 1] = temp;
            index--;
        }
    }

    printf("Sorted Array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}