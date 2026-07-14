#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *source, *destination;

    source = (char *)malloc(100 * sizeof(char));
    destination = (char *)malloc(100 * sizeof(char));

    if(source == NULL || destination == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]", source);

    strcpy(destination, source);

    printf("Copied String: %s\n", destination);

    free(source);
    free(destination);

    return 0;
}