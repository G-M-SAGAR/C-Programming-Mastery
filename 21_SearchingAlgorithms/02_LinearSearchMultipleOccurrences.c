#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 20, 40, 20};
    int n = 6;
    int key = 20;
    int found = 0;

    printf("Occurrences of %d:\n", key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Position %d\n", i + 1);
            found = 1;
        }
    }

    if(!found)
        printf("Element Not Found");

    return 0;
}