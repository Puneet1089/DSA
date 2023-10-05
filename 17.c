#include<stdio.h>
void main()
{
    int m,n,p,q;
    printf("enter the size of matrix 1");
    scanf("%d %d",&m,&n);
    printf("enter the size of matrix 2");
    scanf("%d %d",&p,&q);
    printf("enter the elements of matrix 1");
    int m1[m][n],m2[p][q],c[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the elements of matrix 2");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&m2[i][j]);
            c[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j] = c[i][j] + m1[i][j]-m2[i][j];
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