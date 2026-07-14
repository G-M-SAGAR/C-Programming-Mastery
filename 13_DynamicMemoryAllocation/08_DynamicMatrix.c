#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrix;
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    matrix = (int **)malloc(rows * sizeof(int *));

    for(i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}