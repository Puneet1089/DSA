#include <stdio.h>
void main()
{
    int n;
   printf("enter the size of array");
   scanf("%d",&n);
   int a[n],sum=0,sumn=0;
   printf("enter the elements of an array");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   sum = n*(n+1)/2;
   printf("sum of first n natural number is %d",sum);
   


}