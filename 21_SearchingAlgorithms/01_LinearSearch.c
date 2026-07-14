#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5;
    int key = 30;
    int found = 0;

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
        printf("%d Not Found\n", key);

    return 0;
}