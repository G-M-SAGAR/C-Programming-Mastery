#include <stdio.h>

int main()
{
    int *ptr = NULL;

    if(ptr == NULL)
    {
        printf("Pointer is NULL.\n");
        printf("No memory has been allocated.\n");
    }
    else
    {
        printf("Value = %d\n", *ptr);
    }

    return 0;
}