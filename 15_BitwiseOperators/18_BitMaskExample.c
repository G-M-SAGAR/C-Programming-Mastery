#include <stdio.h>

#define READ    1
#define WRITE   2
#define EXECUTE 4

int main()
{
    int permission = READ | WRITE;

    printf("Permission Value = %d\n", permission);

    if(permission & READ)
        printf("Read Allowed\n");

    if(permission & WRITE)
        printf("Write Allowed\n");

    if(permission & EXECUTE)
        printf("Execute Allowed\n");
    else
        printf("Execute Not Allowed\n");

    return 0;
}