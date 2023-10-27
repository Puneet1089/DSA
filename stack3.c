#include<stdio.h>
int stack[20];
int top=-1;
int r;
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%8;
        n=n/8;
        push(r);

    }
    display();
}

int push(int r)
{
    if(top >= 19)
    {
        printf("Overflow");
    }
    else
    {
        top=top+1;
        stack[top]=r;
    }
}

int display()
{
    if(top>=0)
    {
        for(int i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
    {
        printf("Exit");
    }
}