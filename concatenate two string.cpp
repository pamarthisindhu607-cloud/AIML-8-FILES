//programme to concatenate two string
#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    int i,j, len=0;
    printf("enter string 1");
    gets(s1);
    printf("enter string 2");
      gets(s2);
for(i=0;s1[i]!='\0';i++)
{
	len=len+1;
}
   for(j=0;s2[j]!='\0';j++,len++)
   {
   	s1[len]=s2[j];
   }
       s1[len]='\0';
       printf("the concatenated string is %s",s1);
       return 0;
}
