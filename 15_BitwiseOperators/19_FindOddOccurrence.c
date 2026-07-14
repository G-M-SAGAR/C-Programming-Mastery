#include <stdio.h>

int main()
{
    int arr[] = {4,2,3,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = 0;

    for(int i=0;i<n;i++)
        result ^= arr[i];

    printf("Odd Occurring Element = %d\n", result);

    return 0;
}