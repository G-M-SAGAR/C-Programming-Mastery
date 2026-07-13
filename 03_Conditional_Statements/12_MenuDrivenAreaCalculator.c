#include <stdio.h>

int main()
{
    int choice;
    float radius, length, width, base, height, area;

    printf("===== Area Calculator =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}