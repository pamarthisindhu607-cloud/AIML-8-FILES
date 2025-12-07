//sum of digits of a number
#include<stdio.h>
main()
{
int n,rem,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
}
printf("the sum of digits %d",sum);
}
