#include <stdio.h>

int main()
{
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    printf("\nOriginal Number = %d\n", num);
    printf("Left Shift (%d << %d) = %d\n", num, shift, num << shift);
    printf("Right Shift (%d >> %d) = %d\n", num, shift, num >> shift);

    return 0;
}