#include <stdio.h>

int main()
{
    char str[100];
    int choice;
    int i, length = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("\n===== STRING MENU =====\n");
    printf("1. Find Length\n");
    printf("2. Convert to Uppercase\n");
    printf("3. Convert to Lowercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            while(str[length] != '\0')
            {
                length++;
            }

            printf("Length = %d\n", length);
            break;

        case 2:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
            }

            printf("Uppercase: %s\n", str);
            break;

        case 3:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                    str[i] += 32;
            }

            printf("Lowercase: %s\n", str);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}