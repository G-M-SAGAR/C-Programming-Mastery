#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray in Reverse Order:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}