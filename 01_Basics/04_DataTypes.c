#include <stdio.h>

int main()
{
    int age = 20;
    float percentage = 85.5;
    double salary = 45000.75;
    char grade = 'A';

    printf("Integer Value : %d\n", age);
    printf("Float Value   : %.2f\n", percentage);
    printf("Double Value  : %.2lf\n", salary);
    printf("Character     : %c\n", grade);

    return 0;
}