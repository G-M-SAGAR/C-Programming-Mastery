#include <stdio.h>

int power(int, int);

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("Result = %d\n", power(base, exponent));

    return 0;
}

int power(int base, int exponent)
{
    int i, result = 1;

    for(i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}