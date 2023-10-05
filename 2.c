#include <stdio.h>
void main()
{
    int n;
   printf("enter the size of array");
   scanf("%d",&n);
   int pos,e,i,a[10];
   printf("enter the elements of an array");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter the elemant to be inserted");
   scanf("%d",&e);
   printf("enter the postion to be inserted");
   scanf("%d",&pos);
   n++;
   for(i=n-1;i>=pos;i--)
   {
    a[i+1]=a[i];
   }
   a[pos]=e;
   for(i=0;i<n;i++)
   printf("%d \n",a[i]);
} 