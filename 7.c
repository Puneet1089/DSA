#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("entered array is");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    printf("reversal array is");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}