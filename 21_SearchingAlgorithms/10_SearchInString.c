#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "C Programming Language";
    char word[] = "Programming";

    char *result = strstr(str, word);

    if(result != NULL)
        printf("'%s' Found in String.\n", word);
    else
        printf("'%s' Not Found.\n", word);

    return 0;
}