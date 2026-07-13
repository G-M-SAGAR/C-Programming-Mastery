#include <stdio.h>

int main()
{
    int arr[5];
    int visited[5] = {0};
    int i, j, count;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nFrequency of Elements:\n");

    for(i = 0; i < 5; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}