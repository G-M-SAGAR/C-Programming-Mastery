#include <stdio.h>

int main()
{
    int arr[5];
    int i, smallest;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Smallest Element = %d\n", smallest);

    return 0;
}