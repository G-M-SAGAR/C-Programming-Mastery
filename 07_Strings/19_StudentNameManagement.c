#include <stdio.h>

int main()
{
    char students[5][50];
    int i;

    printf("Enter names of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%49s", students[i]);
    }

    printf("\nStudent List\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, students[i]);
    }

    return 0;
}