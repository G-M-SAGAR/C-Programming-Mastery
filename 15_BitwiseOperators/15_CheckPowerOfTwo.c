#include <stdio.h>

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num > 0 && (num & (num - 1)) == 0)
        printf("%d is Power of Two\n", num);
    else
        printf("%d is NOT Power of Two\n", num);

    return 0;
}