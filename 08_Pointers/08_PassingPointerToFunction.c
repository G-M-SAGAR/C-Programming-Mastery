#include <stdio.h>

void increment(int *num)
{
    (*num)++;
}

int main()
{
    int value;

    printf("Enter a number: ");
    scanf("%d", &value);

    increment(&value);

    printf("After Increment = %d\n", value);

    return 0;
}