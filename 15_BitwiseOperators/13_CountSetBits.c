#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num)
    {
        count += num & 1;
        num >>= 1;
    }

    printf("Set Bits = %d\n", count);

    return 0;
}