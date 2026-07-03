#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial value of a = %d\n", a);

    printf("\nPost-increment (a++) = %d\n", a++);
    printf("After post-increment a = %d\n", a);

    printf("\nPre-increment (++a) = %d\n", ++a);
    printf("After pre-increment a = %d\n", a);

    printf("\nPost-decrement (a--) = %d\n", a--);
    printf("After post-decrement a = %d\n", a);

    printf("\nPre-decrement (--a) = %d\n", --a);
    printf("After pre-decrement a = %d\n", a);

    return 0;
}