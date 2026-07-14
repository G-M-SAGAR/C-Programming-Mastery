#include <stdio.h>

int main()
{
    int num, k;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &k);

    num ^= (1 << k);

    printf("Updated Number = %d\n", num);

    return 0;
}