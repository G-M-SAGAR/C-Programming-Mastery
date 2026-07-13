#include <stdio.h>

void checkEvenOdd(int);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkEvenOdd(number);

    return 0;
}

void checkEvenOdd(int n)
{
    if(n % 2 == 0)
        printf("%d is Even.\n", n);
    else
        printf("%d is Odd.\n", n);
}