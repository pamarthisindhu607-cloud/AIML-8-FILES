//programme for calculator
#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf ("enter two numbers");
	scanf("%d%d,",&n1,&n2);
	printf("enter the operator(+,-,*,/,%)");
	scanf("/n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
printf("the sum is %d",n1+n2);
break;
case '-':
printf("the difference is %d",n1-n2);
break;
case '*':
	printf("the multiply is %d",n1*n2);
	break;
	case'/':
	printf("the division is %d",n1/n2);
	break;
	case '%':
	printf("the modulus is %d",n1%n2);
	break;
	default:printf("invalid operator");
	
}
}

