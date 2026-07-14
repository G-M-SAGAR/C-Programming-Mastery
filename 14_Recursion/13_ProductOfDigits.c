#include <stdio.h>

int productOfDigits(int n)
{
    if(n == 0)
        return 1;

    return (n % 10) * productOfDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("Product of Digits = 0\n");
        return 0;
    }

    if(num < 0)
        num = -num;

    printf("Product of Digits = %d\n", productOfDigits(num));

    return 0;
}