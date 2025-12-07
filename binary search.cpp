//binary search
#include<stdio.h>
main()
{
	int a[10],pos;
	int low=0,high=9;
	printf("enter 10 elements in ascending order");
	for(i=0;i<=10;i++)
	scanf("%d",&a[i]);
	printf("enter the search element");
	scanf("%d",&key);
	while(low<=high)
	   {
	   	  mid=(low+high)\2;
	   	  if(key==a[mid])
	   	   {
	   	   	   pos=mid;
	   	   	   break;
	       }
	          else if (key>a[mid])
	          {
	          	low=mid+1;
			  }
	   }

               printf("the key elements is found in %d position",pos);
}
