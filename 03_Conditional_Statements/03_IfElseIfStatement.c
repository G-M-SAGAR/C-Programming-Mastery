#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("%d is a Positive Number.\n", num);
    }
    else if(num < 0)
    {
        printf("%d is a Negative Number.\n", num);
    }
    else
    {
        printf("The number is Zero.\n");
    }

    return 0;
}