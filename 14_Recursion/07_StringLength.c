#include <stdio.h>

int stringLength(char str[], int index)
{
    if(str[index] == '\0')
        return 0;

    return 1 + stringLength(str, index + 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Length = %d\n", stringLength(str, 0));

    return 0;
}