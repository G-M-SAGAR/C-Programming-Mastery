#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s)
{
    printf("\nStudent Details\n");
    printf("Roll No : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);
}

int main()
{
    struct Student s = {101, "Rahul", 95.6};

    display(s);

    return 0;
}