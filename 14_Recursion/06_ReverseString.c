#include <stdio.h>
#include <string.h>

void reverse(char str[], int index)
{
    if(index < 0)
        return;

    printf("%c", str[index]);

    reverse(str, index - 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Reversed String: ");
    reverse(str, strlen(str) - 1);

    printf("\n");

    return 0;
}