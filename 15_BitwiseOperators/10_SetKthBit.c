#include <stdio.h>

int main()
{
    int num, k;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position (0-based): ");
    scanf("%d", &k);

    num = num | (1 << k);

    printf("Updated Number = %d\n", num);

    return 0;
}