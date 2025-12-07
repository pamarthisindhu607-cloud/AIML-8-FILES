//find the whether given number is palindrome or not
#include<stdio.h>
main()
{
	int n, rem, rev=0, temp;
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	rem=n%10;
	rev= rev*10+rem;
	n=n/10;
	}
	if(temp==rev)
    printf("%d is palindrome",temp);
	else
	printf("%d is not palindrome",temp);
}
