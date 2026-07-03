#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore Swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}