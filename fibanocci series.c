//program of fibanocci series
#include<stdio.h>
int fib(int);
main()
{
	   int n,i;
	   printf("enter the range");
	   scanf("%d",&n);
	   for(i=0;i<=n;i++)
	   {
	   	printf("%d\t",fib(i));
	   }
}
   int fib(int m)
   {
   	if(m==0)
	   return 0;
	   
	else if(m==1)
	   return 1;
	else
	   return fib(m-1)+fib(m-2);
   }
