#include <stdio.h>

int main()
{
    int base, power, result = 1, i;

    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter power: ");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        result *= base;
    }

    printf("Result = %d",result);

    return 0;
}