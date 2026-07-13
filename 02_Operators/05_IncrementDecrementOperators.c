#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial value of a = %d\n", a);

    printf("\nPost Increment (a++) = %d\n", a++);
    printf("Value of a after Post Increment = %d\n", a);

    printf("\nPre Increment (++a) = %d\n", ++a);
    printf("Value of a after Pre Increment = %d\n", a);

    printf("\nPost Decrement (a--) = %d\n", a--);
    printf("Value of a after Post Decrement = %d\n", a);

    printf("\nPre Decrement (--a) = %d\n", --a);
    printf("Value of a after Pre Decrement = %d\n", a);

    return 0;
}