#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x-coordinate: ");
    scanf("%d", &x);

    printf("Enter y-coordinate: ");
    scanf("%d", &y);

    if(x > 0 && y > 0)
    {
        printf("Point lies in First Quadrant.\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Point lies in Second Quadrant.\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("Point lies in Third Quadrant.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("Point lies in Fourth Quadrant.\n");
    }
    else if(x == 0 && y == 0)
    {
        printf("Point lies at the Origin.\n");
    }
    else if(x == 0)
    {
        printf("Point lies on the Y-axis.\n");
    }
    else
    {
        printf("Point lies on the X-axis.\n");
    }

    return 0;
}