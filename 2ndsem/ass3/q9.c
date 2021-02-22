//transpose of triplet matrix
#include<stdio.h>
void trans(int[][3],int[][3],int);
main()
{
	int s[50][3],t[50][3],row,i,j;
	printf("enter size of an row\n");
	scanf("%d",&row);
	printf("enter values in triplet form\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	trans(s,t,row);
}
void trans(int s[][3],int t[][3],int row)
{
	int i,j,k=1;
	printf("triplet input matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<row;j++)
	{
		for(i=1;i<=s[0][2];i++)
		{
			if(s[i][1]==j)
			{
				t[k][0]=s[i][1];
				t[k][1]=s[i][0];
				t[k][2]=s[i][2];
				k++;
			}
		}
		t[0][0]=s[0][1];
		t[0][1]=s[0][0];
		t[0][2]=s[0][2];
	}
	printf("transpose of triplet matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
