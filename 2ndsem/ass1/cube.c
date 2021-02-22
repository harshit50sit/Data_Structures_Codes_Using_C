//finding cube of matrix
#include<stdio.h>
main()
{
	int arr[50][50],arr1[50][50],row,col,i,j;
	printf("enter size of an row and column\n");
	scanf("%d%d",&row,&col);
	printf("enter values in matrices\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr1[i][j]=arr[i][j]*arr[i][j]*arr[i][j];
		}
	}
	printf("cube of given matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
}
				
			
		
