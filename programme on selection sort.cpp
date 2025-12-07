//programme on selection sort
#include<stdio.h>
main()
int a[10],n,i,j,min,temp;
printf("enter size of array");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
    	min=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[j]<a[min])
    		{
    			min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	    printf("the sorted array if:\n");
	    for(i=0;i<n;i++)
	       {
	       	printf("%d\t",a[i]);
		   }
}
