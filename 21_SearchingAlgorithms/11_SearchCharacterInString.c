#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Programming";
    char ch = 'g';

    char *result = strchr(str, ch);

    if(result != NULL)
        printf("Character '%c' Found at Position %ld\n", ch, result - str + 1);
    else
        printf("Character '%c' Not Found\n", ch);

    return 0;
}