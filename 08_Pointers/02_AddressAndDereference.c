#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;

    printf("Age = %d\n", age);
    printf("Address = %p\n", (void *)ptr);

    *ptr = 25;

    printf("Updated Age = %d\n", age);

    return 0;
}