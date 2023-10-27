#include<stdio.h>
void push(int n);
int stack[20];
int top=-1;
int main()
{
    int n,c=0,a=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        
        push(n%10);
        c++;
        n=n/10;
    }
    for(int i=0;i<c/2;i++)
    {
        if(stack[top]==stack[i])
        {
            top=top-1;
        }
        else
        {
            a++;
        }
    }
    if(a>0)
    {
        printf("not palindrome");
    }
    else
    {
        printf("palindrome");
    }
}


void push(int n) 
{
    if (top >= 19)
    {
        printf("Overflow\n");
    }
    else 
    {
        top = top + 1;
        stack[top] = n;
    }
}