#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int i, palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome String.\n");
    else
        printf("Not a Palindrome String.\n");

    return 0;
}