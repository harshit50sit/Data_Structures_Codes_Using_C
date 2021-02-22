//transpose of a matrix
#include<stdio.h>
main()
{
	int arr1[100][100],arr2[100][100],i,j,row,col;
	printf("enter size of coloumn\n");
	scanf("%d",&col);
	printf("entert size of an row\n");
	scanf("%d",&row);
	printf("enter values im matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("matrix before transpose\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr2[j][i]=arr1[i][j];
		}
	}
	printf("matrix after transpose\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
}

			

