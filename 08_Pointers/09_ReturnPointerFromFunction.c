#include <stdio.h>

int* larger(int *a, int *b)
{
    if(*a > *b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    int *result;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    result = larger(&x, &y);

    printf("Largest Number = %d\n", *result);

    return 0;
}