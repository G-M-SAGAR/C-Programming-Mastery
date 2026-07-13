#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr;
    int i, largest;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    largest = *ptr;

    for(i = 1; i < 5; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("Largest Element = %d\n", largest);

    return 0;
}