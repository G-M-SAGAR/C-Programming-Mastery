#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s = {101, "Rahul", 91.5};

    struct Student *ptr = &s;

    printf("Roll No : %d\n", ptr->roll);
    printf("Name    : %s\n", ptr->name);
    printf("Marks   : %.2f\n", ptr->marks);

    return 0;
}