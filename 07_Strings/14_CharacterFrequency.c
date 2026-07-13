#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("'%c' occurred %d time(s).\n", ch, count);

    return 0;
}