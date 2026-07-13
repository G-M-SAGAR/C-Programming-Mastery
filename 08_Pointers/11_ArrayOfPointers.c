#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    printf("Values using Array of Pointers:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", *ptr[i]);
    }

    return 0;
}