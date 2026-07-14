#include <stdio.h>

int main()
{
    unsigned int num, reverse = 0;

    printf("Enter number: ");
    scanf("%u", &num);

    for(int i = 0; i < 32; i++)
    {
        reverse <<= 1;
        reverse |= num & 1;
        num >>= 1;
    }

    printf("Reversed Bits Value = %u\n", reverse);

    return 0;
}