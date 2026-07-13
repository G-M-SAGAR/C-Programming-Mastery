#include <stdio.h>

int reverseNumber(int);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number == reverseNumber(number))
        printf("%d is a Palindrome Number.\n", number);
    else
        printf("%d is Not a Palindrome Number.\n", number);

    return 0;
}

int reverseNumber(int n)
{
    int reverse = 0, digit;

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return reverse;
}