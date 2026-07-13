#include <stdio.h>

int main()
{
    int num = 100;
    float pi = 3.14;

    void *ptr;

    ptr = &num;

    printf("Integer = %d\n", *(int *)ptr);

    ptr = &pi;

    printf("Float = %.2f\n", *(float *)ptr);

    return 0;
}