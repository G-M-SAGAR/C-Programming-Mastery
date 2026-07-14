#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;

    if(argc != 2)
    {
        printf("Usage: ./reverse <string>\n");
        return 1;
    }

    printf("Reversed String: ");

    for(i = strlen(argv[1]) - 1; i >= 0; i--)
    {
        printf("%c", argv[1][i]);
    }

    printf("\n");

    return 0;
}