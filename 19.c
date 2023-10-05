#include<stdio.h>
void main()
{
    int m,n,p,q;
    printf("enter the size of matrix 1");
    scanf("%d %d",&m,&n);
    printf("enter the elements of matrix 1");
    int m1[m][n],c[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m1[i][j]);
            c[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=m1[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
}