#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    printf("Square = %d\n", SQUARE(6));
    printf("Maximum = %d\n", MAX(15, 20));

    return 0;
}