#include<stdio.h>
int stack[20];
int top=-1;
int r,b;
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%16;
        n=n/16;
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
            if(stack[i]<10)
            printf("%d\n",stack[i]);
            else
            {
                printf("%c",65+stack[i]-10);

            }
        }
    }
    else
    {
        printf("Exit");
    }
}