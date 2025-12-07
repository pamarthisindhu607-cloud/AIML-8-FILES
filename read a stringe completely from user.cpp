//programme to read a stringe completely from user
#include<stdio.h>
main()
{
	char name [20];
	printf("enter your name");
	scanf("%[^\n]s",name);
	printf("my name is %s",name);
}
