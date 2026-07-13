#include <stdio.h>

#define VALUE 20

int main()
{
#if VALUE > 10
    printf("VALUE is greater than 10.\n");
#else
    printf("VALUE is 10 or less.\n");
#endif

    return 0;
}