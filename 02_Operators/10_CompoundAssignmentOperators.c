#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("\nInitial Values\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a += b;
    printf("\nAfter a += b");
    printf("\na = %d", a);

    a -= b;
    printf("\nAfter a -= b");
    printf("\na = %d", a);

    a *= b;
    printf("\nAfter a *= b");
    printf("\na = %d", a);

    if(b != 0)
    {
        a /= b;
        printf("\nAfter a /= b");
        printf("\na = %d", a);

        a %= b;
        printf("\nAfter a %%= b");
        printf("\na = %d", a);
    }
    else
    {
        printf("\nDivision and Modulus by zero are not allowed.");
    }

    return 0;
}