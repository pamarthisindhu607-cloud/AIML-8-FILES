//programme on strcmp()
#include <stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int result;
	printf("enter string 1");
	gets(s1);
	printf("enter string 2");
	gets(s2);
	result=strcmp(s1,s2);
	if(result==0)
	printf("strings are equal");
	else
	printf("strings are not equal");
}
