#include <stdio.h>

#define VERSION 1

#if VERSION < 2
#error "VERSION must be 2 or higher."
#endif

int main()
{
    printf("Program Running...\n");
    return 0;
}