#include <stdio.h>

int getNumber();

int main()
{
    int number;

    number = getNumber();

    printf("Returned Number = %d\n", number);

    return 0;
}

int getNumber()
{
    return 100;
}