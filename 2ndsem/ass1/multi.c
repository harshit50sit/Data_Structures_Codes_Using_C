//multiplication of matrices
#include<stdio.h>
main()
{
	int arr[30][30],arr1[30][30],multi[30][30],i,j,row,col;
	printf("enter size of an row\n");
	scanf("%d",&row);
	printf("enter size of an column\n");
	scanf("%d",&col);
	printf("enter values in 1st matrices\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter values in 2nd matrices\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			multi[i][j]=arr[i][j]*arr1[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
}
				

			
	
