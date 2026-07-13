#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius = 5.0;
    float area;

    area = PI * radius * radius;

    printf("Area = %.2f\n", area);

    return 0;
}