/*#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int num,rem,sum=0;
    num= atoi(argv[1]);
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        sum+=rem;
    }
    printf("%d",sum);
} */


// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc,char *argv[])
// {
// 	int sum=0,i;
// 	if(argc<=1)
// 	{
// 	printf("\n Enter appropriate number of arguments to calculate sum  \n \n");
// 	exit(0);
// 	}
// 	else
// 	{
// 		for(i=1;i<argc;i++)
// 		{
// 			sum+=atoi(argv[i]);
// 		}
// 	}
// 	printf("\n Sum of all command line arguments is %d \n \n",sum); 
// }





// #include <stdio.h>
// #include <stdlib.h> 
// int findSumOfDigits(int num)
// {
//     int sum = 0;
//     while (num > 0) 
//     {
//         sum = sum + (num % 10);
//         num = num / 10;
// 	}
// 	return sum;
// }
// int main(int argc, char* argv[])
// {

// 	int num;
// 	if (argc == 1)
//     printf("No command line arguments found.\n");
// 	else 
//     {
// 		num = atoi(argv[1]);
// 		printf("%d\n", findSumOfDigits(num));
// 	}
// 	return 0;
// }



// #include<stdio.h>
// void main()
// {
//     int i,n;
//     printf("enter size f array");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter elements");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d",a[i]); 
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int i,fact=1,f;
//     printf("enter the number");
//     scanf("%d",&f);
//     for (i=1;i<=f;i++)
//     {
//         fact=fact*i;
    
//     }
//     printf("factorial is%d",fact);
// }

/*#include<stdio.h>
fact()
void main()
{
    fact();
}
void fact()
{
    int i,f=1,n;
    printf("enter the number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial is%d",f);
}*/

/*

#include <stdio.h>
int main() {
   int a[10]={6,12,0,18,11,99,55,45,34,2};
   int n=10;
   int i, j, min, t;
   for (i = 0; i < n; i++) {
      min = i;
      for (j = i + 1; j < n; j++) {
         if (a[min] < a[j])
            min = j;
      }
      if (min!=i) {
         t= a[i];
         a[i] = a[min];
         a[min] = t;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", a[i]);
   return 0;
}

*/



#include <stdio.h>
void main()
{
    /*int a[10];
    printf("enter the elements of array");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for (int i=0;i<10;i++)
    printf("%d",a[i]);



    second program  
   int n;
   printf("enter the size of array");
   scanf("%d",&n);
   int pos,e,i,a[10];
   printf("enter the elements of an array");
   for(i=0;i<5;i++)
   scanf("%d",&a[i]);
   printf("enter the elemant to be inserted");
   scanf("%d",&e);
   printf("enter the postion to be inserted");
   scanf("%d",&pos);
   n++;
   for(i=n-1;i>=pos;i--)
   {
    a[i+1]=a[i];
   }
   a[pos]=e;
   for(i=0;i<n;i++)
   printf("%d \n",a[i]);
   
   


   seventh program
   
   int n;
   printf("enter the size of array");
   scanf("%d",&n);
   int a[n];
   printf("enter the elements");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(int i=n-1;i>=0;i--)
   printf("%d",a[i]);*/



   int n;
   printf("enter the size of array");
   scanf("%d",&n);
   int a[n],pos,e,i;
   printf("enter the sorted elements of array");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter the position of array");
   scanf("%d",&pos);
   printf("enter the element inserted");
   scanf("%d",&e);
   n++;
   for(int i=n-1;i>=pos;i--)
   {
    a[i+1]=a[i];
   }
   a[pos]=e;
   for(int i=0;i<n;i++)
   printf("%d",a[i]);


   int pos,e,i;
   int a[5]={1,2,3,4,5};
   printf("enter the element to be inserted");
   scanf("%d",&e);
   printf("enter the postion to be inserted");
   scanf("%d",&pos);
   n++;
   for(i=n-1;i>=pos;i--)
   {
    a[i+1]=a[i];
   }
   a[pos]=e;
   for(i=0;i<n;i++)
   printf("%d \n",a[i]);
   







}


