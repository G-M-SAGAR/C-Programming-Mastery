#include <stdio.h>

int main()
{
    int age;
    float percentage;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Details -----\n");
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f\n", percentage);
    printf("Grade      : %c\n", grade);
    return 0;
}