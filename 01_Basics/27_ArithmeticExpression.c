#include <stdio.h>

int main()
{
    int a, b, c;
    int result;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    result = a + b * c;

    printf("\nResult = %d\n", result);

    return 0;
}