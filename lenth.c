#include<stdio.h>
int main()
{
	char myster[20];
	int i,len=0;
	printf("enter a string");
	gets(myster);
	for(i=0;myster[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("the length of the string is %d",len);
	return 0;
}
