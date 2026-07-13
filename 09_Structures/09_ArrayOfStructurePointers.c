#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
};

int main()
{
    struct Student s1 = {101, "Rahul"};
    struct Student s2 = {102, "Amit"};
    struct Student s3 = {103, "Neha"};

    struct Student *students[3];

    students[0] = &s1;
    students[1] = &s2;
    students[2] = &s3;

    printf("Student Records\n\n");

    for(int i = 0; i < 3; i++)
    {
        printf("Roll : %d\n", students[i]->roll);
        printf("Name : %s\n\n", students[i]->name);
    }

    return 0;
}