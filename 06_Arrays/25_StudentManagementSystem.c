#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    int total = 0;
    float average;

    printf("Enter marks of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    average = (float)total / 5;

    printf("\nStudent Marks:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d = %d\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}