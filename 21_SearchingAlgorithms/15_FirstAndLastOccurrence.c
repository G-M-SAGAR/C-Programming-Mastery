#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 4, 4, 6, 8, 8, 10};
    int n = 8;
    int key = 4;

    int first = -1, last = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    if(first != -1)
    {
        printf("First Occurrence: Position %d\n", first + 1);
        printf("Last Occurrence : Position %d\n", last + 1);
    }
    else
    {
        printf("Element Not Found\n");
    }

    return 0;
}