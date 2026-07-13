#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Pointer ptr stores = %p\n", (void *)ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}