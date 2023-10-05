#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of arrya");
    scanf("%d",&n);
    int a[n],k,count=0,j;
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        k=a[i];
        for(j=0;j<n;j++)
        {
            if(k==a[j])
            {
                count=count+1;
            }
            if(count>1)
            {
                count=0;
                printf("repeated element is %d\n",k);
                
            }
            
        }
        
    }
}




/*
#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of arrya");
    scanf("%d",&n);
    int a[n],k,count=0,j;
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        k=a[i];
        for(j=i+1;j<n;j++)
        {
            if(k==a[j])
            {
                printf("repeated element is %d\n",k);
            }
            
        }
        
    }
}*/








/*
#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of arrya");
    scanf("%d",&n);
    int a[n],k,count=0,j;
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[j]);
            }
            
        }
        
        
    }
}*/