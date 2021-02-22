#include<stdio.h>
main()
{
	int arr[100][100],arr1[100][100],arr2[100][100],i,j,col,row;
	printf("enter size of row\nenter size of col\n");
	scanf("%d%d",&row,&col);
	printf("enter values in 1st array\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter values in 2nd array\n");
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
			arr2[i][j]=arr[i][j]*arr1[i][j];
		}
	}
	printf("multiplied matrix will be\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
}
