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

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n===== Student Records =====\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll  : %d\n", students[i].roll);
        printf("Name  : %s\n", students[i].name);
        printf("Marks : %.2f\n", students[i].marks);
    }

    return 0;
}