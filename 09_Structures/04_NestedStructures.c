#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
};

struct Student
{
    int roll;
    char name[30];
    struct Address addr;
};

int main()
{
    struct Student s = {101, "Rahul", {"Bengaluru", "Karnataka"}};

    printf("Roll No : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("City    : %s\n", s.addr.city);
    printf("State   : %s\n", s.addr.state);

    return 0;
}