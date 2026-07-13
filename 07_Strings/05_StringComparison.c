#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            break;
        }
        i++;
    }

    if(str1[i] == str2[i])
    {
        printf("Strings are Equal.\n");
    }
    else
    {
        printf("Strings are Not Equal.\n");
    }

    return 0;
}