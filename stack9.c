#include<stdio.h>
void push(char x);
void display();
char stack[20];
char st[20];
int x=0;
int top=-1;
int main()
{
    printf("enter the string");
    gets(st);
    for (int i=0;st[i]!='\0';i++)
    {
        push(st[i]);
    }
    display();
}


void push(char x) 
{
    if (top >= 19)
    {
        printf("Overflow\n");
    }
    else 
    {
        top = top + 1;
        stack[top] = x;
    }
}
void display()
{
    if(top>=0)
    {
        for(int i=top; i>=0; i--)
        {
            printf("%c\n",stack[i]);
        }
    }
    else
    {
        printf("Exit");
    }
}


