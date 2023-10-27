#include<stdio.h>
int reverse(int n,int s)
{
    if(n==0)
    {
        return s;

    }
    return reverse(n/10,s*10+n%10);
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",reverse(n,0));
}