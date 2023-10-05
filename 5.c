#include<stdio.h>
void main()
{
    int n;
    printf("size of array");
    scanf("%d",&n);
    int a[n],sum=0,sumn=0,missing_no;
    sumn=n*(n+1)/2;
    printf("sum of size of array is %d \n",sumn);
    printf("enter the elements of array strating from 1 ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    missing_no=sumn-sum;
    printf("missing_no is %d",missing_no);
}