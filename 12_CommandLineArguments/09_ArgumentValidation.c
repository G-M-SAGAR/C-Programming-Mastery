#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Error: No arguments provided.\n");
        printf("Usage: ./program <arguments>\n");
        return 1;
    }

    printf("Arguments are valid.\n");

    return 0;
}