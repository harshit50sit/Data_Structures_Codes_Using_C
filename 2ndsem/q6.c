//find sparsity and density of any user enterd matrix
#include<stdio.h>
void sparse(int[][50],int,int);
main()
{
	int arr[50][50],i,j,row,col;
	printf("enter size of an row and column\n");
	scanf("%d%d",&row,&col);
	printf("enter values in matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	sparse(arr,row,col);
}
void sparse(int arr[][50],int row,int col)
{
	int i,j,c1=0,c2=0,c3=0;
	float spar,dens;
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
			c3++;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]%2==0)
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}
	}
	spar=c1/(float)c3;
	dens=1-spar;
	printf("sparsity=%f\ndensity=%f\n",spar,dens);
}


