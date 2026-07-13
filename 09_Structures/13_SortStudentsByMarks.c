#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[3], temp;
    int i, j;

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%29s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 0; i < 2; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Marks (Descending)\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll  : %d\n", s[i].roll);
        printf("Name  : %s\n", s[i].name);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}