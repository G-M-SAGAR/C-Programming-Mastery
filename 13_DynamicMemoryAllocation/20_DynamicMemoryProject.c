#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;
    int n, i, total = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = (int *)malloc(n * sizeof(int));

    if(marks == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    average = (float)total / n;

    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    free(marks);

    return 0;
}