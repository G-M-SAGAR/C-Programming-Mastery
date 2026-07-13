#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    ptr = str;

    printf("\nCharacters are:\n");

    while(*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}