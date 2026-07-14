#include <stdio.h>

int main()
{
    int matrix[3][3] =
    {
        {0,0,5},
        {0,8,0},
        {2,0,0}
    };

    printf("Row Col Value\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]!=0)
                printf("%3d %3d %5d\n",i,j,matrix[i][j]);
        }
    }

    return 0;
}