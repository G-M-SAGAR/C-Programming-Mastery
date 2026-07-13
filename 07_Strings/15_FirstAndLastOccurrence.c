#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i;
    int first = -1, last = -1;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    if(first == -1)
    {
        printf("Character not found.\n");
    }
    else
    {
        printf("First Occurrence = %d\n", first);
        printf("Last Occurrence = %d\n", last);
    }

    return 0;
}