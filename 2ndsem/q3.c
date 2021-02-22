//sum of each row and each column of matrix
#include<stdio.h>
void add(int[][50],int[],int[],int,int);
main()
{
	int arr[50][50],arr1[50],arr2[50],i,j,row,col;
	printf("enter size of row and column\n");
	scanf("%d%d",&row,&col);
	printf("enter values in magtrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	add(arr,arr1,arr2,row,col);
}
void add(int arr[][50],int arr1[],int arr2[],int row,int col)
{
	int i,j,k=0,sum1=0,sum2=0;
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
			arr1[i]=arr[k][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr2[i]=arr[i][k];
		}
	}
	for(j=0;j<i;j++)
	{
		sum1=sum1+arr1[j];
	}
	for(j=0;j<i;j++)
	{
		sum2=sum2+arr1[j];
	}
	printf("sum of only row element=%d\n",sum1);
	printf("sum of only column elements=%d\n",sum2);
}
	
		   
