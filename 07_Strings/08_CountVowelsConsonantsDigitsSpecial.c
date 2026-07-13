#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while(str[i] != '\0')
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
               ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if(ch != ' ')
        {
            special++;
        }

        i++;
    }

    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}