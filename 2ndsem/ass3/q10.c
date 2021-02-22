//addition of triplet matrix
#include<stdio.h>
void add(int[][3],int[][3],int[][3],int);
main()
{
	int t1[50][3],t2[50][3],row,i,j,sum[50][3],row1;
	printf("enter size of an row\n");
	scanf("%d",&row);
	printf("enter values in 1st triplet matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&t1[i][j]);
		}
	}
	printf("again enter size of row\n");
	scanf("%d",&row1);
	printf("enter values in 2nd triplet matrix\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&t2[i][j]);
		}
	}
	add(t1,t2,sum,row);
}
void add(int t1[][3],int t2[][3],int sum[][3],int row)
{
	int i,j,k=1,c=0;
	printf("1st input triplet matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t1[i][j]);
		}
		printf("\n");
	}
	printf("2nd input triplet matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=0;
		}
	}
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=3;j++)
		{
		//	if(t1[k][0]!=t2[k][0]||t1[k][1]!=t2[k][1])
		//	{
		//		printf("addition not possible\n");
		//	}	k++;
			
			 if(t1[k][0]<t2[k][0])
			{
				sum[k][0]=t1[k][0];
				k++;
			}
			 else if(t1[k][0]>t2[k][0])
			{
				sum[k][0]=t2[k][0];
				k++;
			}
		       else if(t1[k][0]==t2[k][0])
			{
				if(t1[k][1]>t2[k][1])
				{
					sum[k][1]=t2[k][1];
					k++;
				}
				else if(t1[k][1]<t2[k][1])
				{
					sum[k][1]=t1[k][1];
					k++;
				}
				else
				{
					sum[k][2]=t1[k+1][2]+t2[k+1][2];
					k++;
					c++;
				}
				
			}
		}
	}
	sum[0][0]=t1[0][0];
	sum[0][1]=t1[0][1];
	sum[0][2]=t1[0][2]+t2[0][2]-c;
	printf("addition matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}




			
