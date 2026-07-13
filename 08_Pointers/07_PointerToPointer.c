#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Value of num = %d\n", num);
    printf("Using ptr = %d\n", *ptr);
    printf("Using pptr = %d\n", **pptr);

    printf("Address of num = %p\n", (void *)&num);
    printf("ptr stores = %p\n", (void *)ptr);
    printf("pptr stores = %p\n", (void *)pptr);

    return 0;
}