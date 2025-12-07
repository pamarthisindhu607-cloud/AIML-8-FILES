//programme to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int a,b;
	printf("enter two number a,b");
	scanf("%d%d",&a,&b);
	printf("before swapping:a=%d,b=%d/n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping;a=%d,b=%d/n",a,b);
}
