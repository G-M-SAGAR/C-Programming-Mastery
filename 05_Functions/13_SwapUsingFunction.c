#include <stdio.h>

void swap(int, int);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After Function Call: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Inside Function: a = %d, b = %d\n", x, y);
}