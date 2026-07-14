#include <stdio.h>

int main()
{
    int num, k;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position (0-based): ");
    scanf("%d", &k);

    if(num & (1 << k))
        printf("Bit %d is SET\n", k);
    else
        printf("Bit %d is NOT SET\n", k);

    return 0;
}