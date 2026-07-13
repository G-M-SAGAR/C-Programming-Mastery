#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};

    int *p1 = &arr[1];
    int *p2 = &arr[3];

    if(p1 < p2)
    {
        printf("p1 comes before p2\n");
    }
    else
    {
        printf("p2 comes before p1\n");
    }

    printf("Difference = %ld elements\n", p2 - p1);

    return 0;
}