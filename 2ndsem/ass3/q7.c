//converting sparse to triplet form
#include<stdio.h>
void triplet(int[][50],int[][3],int,int);
main()
{
	int a[50][50],t[50][3],row,col,i,j;
	printf("enter size of row and column\n");
	scanf("%d%d",&row,&col);
	printf("enter values in sparse matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	triplet(a,t,row,col);
}
void triplet(int a[][50],int t[][3],int row,int col)
{
	int i,j,k=1,c=0;
	printf("sparse matrix is\n");
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
			t[0][0]=row;
			t[0][1]=col;
			if(a[i][j]!=0)
			{
				t[k][0]=i;
				t[k][1]=j;
				t[k][2]=a[i][j];
				k++;
				c++;
			}
			t[0][2]=c;
		}
	}
	printf("triplet matrix is\n");
	for(i=0;i<c+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}



			


