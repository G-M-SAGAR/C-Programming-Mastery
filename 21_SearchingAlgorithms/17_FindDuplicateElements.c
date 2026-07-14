#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 2, 8, 4, 10};
    int n = 7;

    printf("Duplicate Elements:\n");

    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate)
            continue;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}