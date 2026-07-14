#include <stdio.h>

int main()
{
    int num, shift;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter shift count: ");
    scanf("%d", &shift);

    printf("Result = %d\n", num << shift);

    return 0;
}