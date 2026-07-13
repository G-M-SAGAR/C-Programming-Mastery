#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;
    int identity = 1;

    printf("Enter 3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j)
            {
                if(matrix[i][j] != 1)
                    identity = 0;
            }
            else
            {
                if(matrix[i][j] != 0)
                    identity = 0;
            }
        }
    }

    if(identity)
        printf("It is an Identity Matrix.\n");
    else
        printf("It is NOT an Identity Matrix.\n");

    return 0;
}