#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d is the Largest Number.\n", num1);
    }
    else if(num2 > num1)
    {
        printf("%d is the Largest Number.\n", num2);
    }
    else
    {
        printf("Both numbers are Equal.\n");
    }

    return 0;
}