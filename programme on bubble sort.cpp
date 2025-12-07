//programme on bubble sort
#include<stdio.h>
main()
{
	int x[50],i,j,n,temp=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf ("%d",&x[i]);
	}
	   for(i=0;i<n;i++)
	   {
	   	for(j=0;j<n-i;j++)
	   	   {
	   	   	   if(x[i]>x[j+1])
	   	   	     {
	   	   	     	  temp=x[i];
	   	   	     	  x[j]=x[j+1];
	   	   	     	  x[j+1]=temp;
		       	}
	    	}
	    	   printf("the sorted array is \n");
	    	   for(i=0;i<n;i++)
	    	   {
	    	   	printf("%d\t",x[i]);
			   }
	   }
}
