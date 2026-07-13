#include <stdio.h>

int sum(int, int);

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum = %d\n", sum(a, b));

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}