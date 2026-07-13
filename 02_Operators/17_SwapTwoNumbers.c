#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}