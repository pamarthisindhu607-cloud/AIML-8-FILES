//programme to print a matrix
#include<stdio.h>
main()
{
	int matrix[2][3]={{7,14,21},{6,12,18}};
	int i,j;
	printf("the matrix is:\n");
	for(i=0;i<=1;i++)

    {
    	for(j=0;j<=2;j++)
	{
	
	
		printf("%d\t",matrix[i][j]);
	}
	    printf("\n");
    }
}
