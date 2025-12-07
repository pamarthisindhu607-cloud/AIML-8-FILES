//programme to compare two strings
#include<stdio.h>
int main()
 {
	char s1[20],s2[20];
	int i,flag=0;
	printf("enter string 1");
	gets (s1);
	printf("enter string 2");
	gets (s2);
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	     if(flag==1)
	     printf("strings are not equal");
	     else
	     printf("strings are equal");
	     return 0;
}
