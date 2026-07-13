#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student createStudent()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%49s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    return s;
}

int main()
{
    struct Student s;

    s = createStudent();

    printf("\nStudent Details\n");
    printf("Roll No : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}