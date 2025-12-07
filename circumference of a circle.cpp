//programme to find circumference of a circle
#include<stdio.h>
main()
{
	float radius,circumference;
	printf("enter the radius of the circle:radius,circumference");
	scanf("%f",&radius);
	circumference =2* pi* radius;
	printf("circumference of the circle=%2f/n",circumference);
}

