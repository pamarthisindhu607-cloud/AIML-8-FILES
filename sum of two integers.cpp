//programme to find sum of two integers without using the '+' operators
#include<stdio.h>
main()
{
	int a,b;
	printf("enter two integers:a,b");
	scanf("%d%d",&a,&b);
	while(b!=0);
	int carry =a&b;
	a=a^b;
	b=carry<<1;
	printf("sum=%d/n",a);
}
