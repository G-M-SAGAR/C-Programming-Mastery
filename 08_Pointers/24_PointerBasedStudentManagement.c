#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student *student;

    student = (struct Student *)malloc(sizeof(struct Student));

    if(student == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &student->roll);

    printf("Enter Name: ");
    scanf("%49s", student->name);

    printf("Enter Marks: ");
    scanf("%f", &student->marks);

    printf("\nStudent Details\n");
    printf("Roll  : %d\n", student->roll);
    printf("Name  : %s\n", student->name);
    printf("Marks : %.2f\n", student->marks);

    free(student);

    return 0;
}