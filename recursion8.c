#include<stdio.h>
int sumd(int n,int s)
{
    if(n==0)
    {
        return s;
    }
    return sumd(n/10,s+n%10);

}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",sumd(n,0));

}