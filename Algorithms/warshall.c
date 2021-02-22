#include<stdio.h>
int w[100][100],D[100][100][100];
void warshall(int);
main()
{
	int i,v,k,j;
	printf("Enter the number of nodes:\n");
	scanf("%d",&v);
	printf("Enter the number weighted matrix:\n");
	for(i=1;i<=v;i++)
		for(j=1;j<=v;j++)
			scanf("%d",&w[i][j]);

	warshall(v);
        
	for(k=0;k<v;k++)
	{
		printf(" k=%d \n",k);
		printf("\n");
		for(i=1;i<=v;i++)
		{
			for(j=1;j<=v;j++)
			{
				printf("%d\t",D[k][i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

}
void warshall(int v)
{
	int i,j,k;
	for(i=1;i<=v;i++)
		for(j=1;j<=v;j++)
			D[0][i][j]=w[i][j];
	for(k=1;k<=v;k++)
	{
		for(i=1;i<=v;i++)
		{
			for(j=1;j<=v;j++)
			{
				if((D[k-1][i][j])<(D[k-1][i][k]+D[k-1][k][j]))
					D[k][i][j]=D[k-1][i][j];
				else
					D[k][i][j]=D[k-1][i][k]+D[k-1][k][j];
			}
		}
	}
}

		
