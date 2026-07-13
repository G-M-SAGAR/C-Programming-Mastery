#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1 = {101, "Rahul", 89.5};

    printf("Student Details\n");
    printf("Roll No : %d\n", s1.roll);
    printf("Name    : %s\n", s1.name);
    printf("Marks   : %.2f\n", s1.marks);

    return 0;
}