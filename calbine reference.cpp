#include<stdio.h>
void swap(int*,int*);
main()
{
	int a=2,b=3;
	printf("before swapping a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("in main function after swaping a=%d,b=%d\n",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
printf("in swap function after swapping a=%d,b=%d\n",*a,*b);
}
