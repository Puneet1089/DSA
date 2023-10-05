#include<stdio.h>
void main()
{
    int p,q,m,n;
    printf("enter the size of matrix 1");
    scanf("%d %d",&m,&n);
    printf("enter the size of matrix 2");
    scanf("%d %d",&p,&q);
    int m1[m][n],m2[p][q],c[m][q];
    printf("enter the elements of matrix 1");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
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
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+ m1[i][k]*m2[k][j];
            }
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



