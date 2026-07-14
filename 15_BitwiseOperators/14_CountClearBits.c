#include <stdio.h>

int main()
{
    unsigned int num;
    int bits = sizeof(num) * 8;
    int setBits = 0;

    printf("Enter number: ");
    scanf("%u", &num);

    unsigned int temp = num;

    while(temp)
    {
        setBits += temp & 1;
        temp >>= 1;
    }

    printf("Clear Bits = %d\n", bits - setBits);

    return 0;
}