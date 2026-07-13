#include <stdio.h>

#define VALUE 100

#undef VALUE

#define VALUE 500

int main()
{
    printf("VALUE = %d\n", VALUE);

    return 0;
}