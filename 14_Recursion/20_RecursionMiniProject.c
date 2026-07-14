#include <stdio.h>

long long factorial(int n)
{
    if(n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumDigits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int choice, n;

    do
    {
        printf("\n===== Recursion Mini Project =====\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci\n");
        printf("3. Sum of Digits\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number: ");
                scanf("%d", &n);
                printf("Factorial = %lld\n", factorial(n));
                break;

            case 2:
                printf("Enter Term: ");
                scanf("%d", &n);
                printf("Fibonacci = %d\n", fibonacci(n));
                break;

            case 3:
                printf("Enter Number: ");
                scanf("%d", &n);
                printf("Sum = %d\n", sumDigits(n));
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}