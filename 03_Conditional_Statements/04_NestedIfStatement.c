#include <stdio.h>

int main()
{
    int age;
    char citizenship;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian citizen? (Y/N): ");
    scanf(" %c", &citizenship);

    if(age >= 18)
    {
        if(citizenship == 'Y' || citizenship == 'y')
        {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("You are not eligible to vote (Not an Indian citizen).\n");
        }
    }
    else
    {
        printf("You are not eligible to vote (Age below 18).\n");
    }

    return 0;
}