#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[5];
    int i;
    float total = 0.0, average;

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        total += students[i].marks;
    }

    average = total / 5;

    printf("\n===== Student Report =====\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRoll  : %d\n", students[i].roll);
        printf("Name  : %s\n", students[i].name);
        printf("Marks : %.2f\n", students[i].marks);
    }

    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}