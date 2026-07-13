#include <stdio.h>

int gcd(int, int);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));

    return 0;
}

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}