#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = 5;
    int expected = 1;

    printf("Missing Element(s): ");

    for(int i = 0; i < n; i++)
    {
        while(arr[i] != expected)
        {
            printf("%d ", expected);
            expected++;
        }
        expected++;
    }

    printf("\n");

    return 0;
}