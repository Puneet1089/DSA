#include<stdio.h>
int power(int n,int p,int s)
{
    if (p==0)
    {
        return s;
    }
    else if (p<0)
    {
        s=s*n;
        return power(n,p+1,s);
    }
    s=s*n;
    return power(n,p-1,s);
}
int main()
{
    int n,p;
    float s;
    printf("enter the base value");
    scanf("%d",&n);
    printf("enter the power of number");
    scanf("%d",&p);
    if(p<0)
    {
        s = 1.0/power(n,p,1);
        printf("%f",s);
    }
    else
    {
        printf("%d",power(n,p,1));
    }
}


/*below code does not includes negative power condition */

/*#include<stdio.h>
int power(int n,int p,int s)
{
    if (p==0)
    {
        return s;
    }
    s=s*n;
    return power(n,p-1,s);
}
int main()
{
    int n,p;
    printf("enter the base value");
    scanf("%d",&n);
    printf("enter the power of number");
    scanf("%d",&p);
    if(p<0)
    {
        printf("please enter postive power\n");
        return main();
    }
    printf("%d",power(n,p,1));
}*/



/*#include<stdio.h>
void main()
{
    float n;
    float a;
    scanf("%f",&n);
    a=(1/n);
    printf("%f",a);
}*/
