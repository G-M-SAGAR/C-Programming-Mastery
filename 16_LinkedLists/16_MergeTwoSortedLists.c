#include<stdio.h>

int main()
{
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};

    int i=0,j=0;

    printf("Merged List:\n");

    while(i<4 && j<4)
    {
        if(a[i]<b[j])
            printf("%d ",a[i++]);
        else
            printf("%d ",b[j++]);
    }

    while(i<4)
        printf("%d ",a[i++]);

    while(j<4)
        printf("%d ",b[j++]);

    return 0;
}