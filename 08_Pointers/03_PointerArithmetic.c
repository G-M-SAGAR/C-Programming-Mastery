#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Current Value = %d\n", *ptr);

    ptr++;

    printf("After ptr++ = %d\n", *ptr);

    ptr++;

    printf("After another ptr++ = %d\n", *ptr);

    ptr--;

    printf("After ptr-- = %d\n", *ptr);

    return 0;
}