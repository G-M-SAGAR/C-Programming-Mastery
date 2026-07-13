#include <stdio.h>

int main()
{
    int base, exponent, i;
    long long power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld\n", base, exponent, power);

    return 0;
}