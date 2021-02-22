//regenerate the original matrix from triplet matrix
#include<stdio.h>
void regen(int [][3],int [][50],int);
main()
{
	int t[50][3],s[50][50],i,j,row;
	printf("enter size of row\n");
	scanf("%d",&row);
	printf("enter values in triplet matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
	regen(t,s,row);
}
void regen(int t[][3],int s[][50],int row)
{
	int i,j,k=1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<t[0][0];i++)
	{
		for(j=0;j<t[0][1];j++)
		{
			s[i][j]=0;
		}
	}
	for(i=0;i<t[0][0];i++)
	{
		for(j=0;j<t[0][1];j++)
		{
			if(t[k][0]==i && t[k][1]==j)
			{
				s[i][j]=t[k][2];
				k++;
			}
		}

	}
	printf("original sparse matrix is\n");
	for(i=0;i<t[0][0];i++)
	{
		for(j=0;j<t[0][1];j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}


				

			

