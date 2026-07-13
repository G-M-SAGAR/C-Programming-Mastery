#include <stdio.h>

int main()
{
    int n,i,j,flag;

    for(n=2;n<=100;n++)
    {
        flag=0;

        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            printf("%d\n",n);
    }

    return 0;
}