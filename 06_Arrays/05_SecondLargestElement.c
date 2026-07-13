#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5];
    int i;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        printf("Second largest element does not exist.\n");
    else
        printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}