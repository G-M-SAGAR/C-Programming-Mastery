#include <stdio.h>

int main()
{
    int arr[10];
    int i, key;
    int low = 0, high = 9, mid;
    int found = 0;

    printf("Enter 10 elements in Sorted Order:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found)
        printf("Element found at position %d\n", mid + 1);
    else
        printf("Element not found.\n");

    return 0;
}