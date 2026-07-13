#include <stdio.h>

int main()
{
    char source[100];
    char destination[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99s", source);

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Copied String: %s\n", destination);

    return 0;
}