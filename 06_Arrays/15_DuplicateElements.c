#include <stdio.h>

int main()
{
    int arr[5];
    int i, j;
    int found = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate Elements:\n");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
    {
        printf("No duplicate elements found.\n");
    }

    return 0;
}