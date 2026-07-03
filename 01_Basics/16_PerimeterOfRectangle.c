#include <stdio.h>

int main()
{
    float length, breadth, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);

    printf("Perimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}