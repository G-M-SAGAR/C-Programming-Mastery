#include <stdio.h>

typedef struct
{
    int roll;
    char name[50];
    float marks;
} Student;

int main()
{
    Student s = {101, "Rahul", 92.5};

    printf("Student Details\n");
    printf("Roll No : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}