#include <stdio.h>

int main()
{
    int i;

    printf("ASCII Values from 0 to 127:\n\n");

    for(i = 0; i <= 127; i++)
    {
        printf("ASCII %d = %c\n", i, i);
    }

    return 0;
}