#include <stdio.h>

int isArmstrong(int);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(isArmstrong(number))
        printf("%d is an Armstrong Number.\n", number);
    else
        printf("%d is Not an Armstrong Number.\n", number);

    return 0;
}

int isArmstrong(int n)
{
    int original = n;
    int digit, sum = 0;

    while(n != 0)
    {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return (sum == original);
}