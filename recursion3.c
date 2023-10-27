#include<stdio.h>
int fibo(int n)
{
    if (n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fibon1 = fibo(n-1);
    int fibon2 = fibo(n-2);
    int fibon = fibon1 + fibon2;
    printf("%d\n",fibon);
    return fibon;


}
int main()
{
    int n;
    printf("enter the number of fibonccai elements ");
    scanf("%d",&n);
    printf("%d",fibo(n));
}