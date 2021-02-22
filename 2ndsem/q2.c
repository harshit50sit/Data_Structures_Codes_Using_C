//sum of diagonals elements of matrix
#include<stdio.h>
void sum(int[][50],int[],int,int);
main()
{
	int arr[50][50],row,col,i,j,arr1[50];
	printf("enter size of row and column\n");
	scanf("%d%d",&row,&col);
	printf("enter values in matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	sum(arr,arr1,row,col);
}
void sum(int arr[][50],int arr1[],int row,int col)
{
	int i,j,add=0;
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
			arr1[i]=arr[i][i];
		}
	}
	for(j=0;j<i;j++)
	{
		add=add+arr1[j];
	}
	printf("\nsum of diagonals elements =%d\n",add);
}
			


