//check a matrix is sparse or not
#include<stdio.h>
main()
{
	int arr[50][50],i,j,row,col,c1=0,c2=0;
	printf("enter size of an row and column of matrices\n");
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
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]==0)
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}
	}
	if(c1>c2)
	{
		printf("it is sparse matrix\n");
	}
	else
	{
		printf("not sparse matrix\n");
	}
}
