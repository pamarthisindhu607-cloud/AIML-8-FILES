//program to find sum and percentage of marks
#include<stdio.h>
main()
{
	int i;
	marks(b);
	int percentage,sum=0;
	for(i=0;i<6;i++)
	{
		printf("enter %d marks,i+1");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<b;i++)
	{
		sum=sum+marks[i];
	}
	percentage=(sum\600)*100;
	printf("the total marks:%d\n",sum);
	printf("the percentage:%d",percentage);
}
