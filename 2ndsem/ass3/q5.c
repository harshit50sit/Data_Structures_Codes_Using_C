//insert elements in place of zero
#include<stdio.h>
void spr(int[][50],int,int);
main()
{
	int a[50][50],i,j,row,col;
	printf("enter size of row and column\n");
	scanf("%d%d",&row,&col);
	printf("enter values in matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	spr(a,row,col);
}
void spr(int a[][50],int row,int col)
{
	int value,i,j,c1=0,c2=0;
	printf("matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==0)
			{
				c1++;
			}
			else
			{
				c2++;			}
		}
	}
	if(c1>c2)
	{
		printf("it is sparse matrix\n");
		if(a[i][j]==0)
		{
		printf("enter values in place of zeros\n");
		scanf("%d",&value);
		a[i][j]=value;
		}
		printf("new matrix id\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("not sparse matrix\n");
	}

}


