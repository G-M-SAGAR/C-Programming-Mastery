#include <stdio.h>

int main()
{
    char names[5][30];
    int i;

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%29s", names[i]);
    }

    printf("\nNames are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}