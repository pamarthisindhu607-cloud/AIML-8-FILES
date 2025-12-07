//programme on linear search
#include<stdio.h>
main()
{
	int x[8]={6,9,4,1,7,2,3,5};
	int i,key,found=0,pos;
	printf("enter search element");
	scanf("%d",&key);
	for(i=0;i<=7;i++)
	{
		if(key==x[i])
    	{  
	    	found=1;
	    	pos=i;
	    }
   }
        if (found==1)
        printf("%d is found in %d position",key,pos);
        else
        printf("%d is not found",key);
}
		

	   

