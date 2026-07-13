#include <stdio.h>

int main()
{
#ifndef VERSION
    printf("VERSION is not defined.\n");
#endif

    return 0;
}