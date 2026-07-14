#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int found = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d Found at Position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element Not Found\n");

    return 0;
}