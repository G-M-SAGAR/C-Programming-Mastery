#include <stdio.h>

long long factorial(int);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial = %lld\n", factorial(number));

    return 0;
}

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}