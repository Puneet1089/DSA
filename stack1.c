#include<stdio.h>
int stack[20],n,item;
int top=-1;
void push();
void pop();
void display();
void main()
{
int choice;
printf("enter the capacity\n");
scanf("%d",&n);

do{
printf("enter the choice\n 1-push\n 2-pop\n 3-display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
default:
    printf("Invalid choice");
}
}while(choice<4);


}

void push()
{
    if (top>=n-1)
        printf("stack overflow\n");
    else
    {
      top=top+1;
      printf("enter the element is to inserted\n");
      scanf("%d",&item);
      stack[top]=item;
    }
}
void pop()
{
int x;
    if(top<=-1)
        printf("underflow");
    else
    {
        x=stack[top];
        printf("\nDeleted element = %d\n",x);
        top=top-1;

    }
}
void display()
{
    int i;
    printf("elements in the stack are");
    for(i=top;i>=0;i--)
    printf("%d\n",stack[i]);

}