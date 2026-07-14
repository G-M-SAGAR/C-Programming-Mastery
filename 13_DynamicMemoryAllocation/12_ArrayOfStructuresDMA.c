#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
};

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *students;

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if(students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
    }

    printf("\nStudent List\n");

    for(i = 0; i < n; i++)
    {
        printf("%d  %s\n", students[i].roll, students[i].name);
    }

    free(students);

    return 0;
}