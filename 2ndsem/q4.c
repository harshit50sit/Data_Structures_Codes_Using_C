//printt all odd elementsin matrix
#include<stdio.h>
void oddp(int[][50],int,int);
main()
{
	int arr[50][50],row,col,i,j;
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
	oddp(arr,row,col);
}
void oddp(int arr[][50],int row,int col)
{
	int i,j,arr1[50],k=0;
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
			if(arr[i][j]%2==1)
			{
				arr1[k]=arr[i][j];
				k++;
			}
		}
	}
	printf("odd elements are\n");
	for(j=0;j<k;j++)
	{
		printf("%d\n",arr1[j]);
	}
}
