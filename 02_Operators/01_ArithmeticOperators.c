#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nArithmetic Operations\n");
    printf("---------------------\n");

    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);

    if(b != 0)
    {
        printf("Division       : %d\n", a / b);
        printf("Modulus        : %d\n", a % b);
    }
    else
    {
        printf("Division and Modulus by zero are not allowed.\n");
    }

    return 0;
}