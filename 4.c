#include<stdio.h>
void main()
{
    int n;
    printf("size of array");
    scanf("%d",&n);
    int a[n],pos;
    printf("enter elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be deleted");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }

}