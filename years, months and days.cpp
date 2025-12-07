//complete the c programme to convert days into years,month and days
#include<stdio.h>
main()
{
	int days,years,months;
	printf("enter total numbers of days,days");
	scanf("%d",&days);
	years=days/365;
	months=days/30;
	days=days%365;
	days=days%30;
	printf("years=%d/n",years);
	printf("months=%d/n",months);
	printf("days=%d/n",days);
}
