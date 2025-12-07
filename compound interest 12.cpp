//program to input principle, time and rate(p t r) and find compound interest
#include<stdio.h>
main()
{
	double principal time,rate,compound interest,amount;
	printf("enter principal amount;principle");
	scanf("%f if",&principal);
	printf("enter time/in year);time");
	scanf("%1f",&time);
	printf("enter rate of interest,rate");
	scanf("%1f",&rate);
	amount =principal*power((1+rate/100);time);
	compound interest=amount-principal;
	printf("compound interest =%21f/n",compound interest);
	printf("total amount =%21f/n",amount);
}
