#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 5, 7, 5, 9, 5};
    int n = 7;
    int key = 5;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }

    printf("%d occurs %d times.\n", key, count);

    return 0;
}