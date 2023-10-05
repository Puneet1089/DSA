#include<stdio.h>
void main()
{
    int m,n;
    printf("enter the size of matrix 1");
    scanf("%d %d",&m,&n);
    int m1[m][n];
    printf("enter the elements of matrix 1");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",m1[j][i]);
        }
    }
}
