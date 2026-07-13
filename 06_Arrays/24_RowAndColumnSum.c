#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;
    int rowSum, colSum;

    printf("Enter 3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nRow Sums:\n");

    for(i = 0; i < 3; i++)
    {
        rowSum = 0;

        for(j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
        }

        printf("Row %d = %d\n", i + 1, rowSum);
    }

    printf("\nColumn Sums:\n");

    for(j = 0; j < 3; j++)
    {
        colSum = 0;

        for(i = 0; i < 3; i++)
        {
            colSum += matrix[i][j];
        }

        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}