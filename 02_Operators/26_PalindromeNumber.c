#include <stdio.h>

int main()
{
    int num, originalNum, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(originalNum == reverse)
    {
        printf("%d is a Palindrome Number.\n", originalNum);
    }
    else
    {
        printf("%d is Not a Palindrome Number.\n", originalNum);
    }

    return 0;
}