#include <stdio.h>

#define DEBUG 1

int main()
{
#if DEBUG
    printf("Debug Information Enabled.\n");
#else
    printf("Release Mode.\n");
#endif

    printf("Program Executed.\n");

    return 0;
}