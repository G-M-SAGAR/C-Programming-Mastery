#include <stdio.h>

int minimum(int, int);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Minimum = %d\n", minimum(a, b));

    return 0;
}

int minimum(int x, int y)
{
    if(x < y)
        return x;
    else
        return y;
}