#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    float result1, result2;
    result1 = a / b;
    result2 = (float)a / b;

    printf("Without Type Casting = %.2f\n", result1);
    printf("With Type Casting    = %.2f\n", result2);

    return 0;
}