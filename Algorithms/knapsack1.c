#include<stdio.h>
int a[100][100],b[100][100],n,W;
int max(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}

}
void printmatrix()
{
	int i,j;
	printf("Matrix a is\n");
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=W;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix b is\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=1;j<=W-1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

}

int knapSack(int W, int wt[], int val[], int n)
{
	int i, j;
	//        int a[n+1][W+1];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<W-1;j++)
		{
			b[i][j]=0;

		}

	}



	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= W; j++)
		{
			if (i==0 || j==0)
			{
				a[i][j] = 0;
			}
			else if (wt[i-1] <= j)
			{
				a[i][j] = max(val[i-1] + a[i-1][j-wt[i-1]],  a[i-1][j]);
				b[i][j]=1;
			}
			else
			{
				a[i][j] = a[i-1][j];
		//		b[i][j]=1;
			}
		}
	}

	printmatrix();
;

	return a[n][W];
}

main()
{
	int i,val[20], wt[20], res;

	printf("Enter number of items:");
	scanf("%d", &n);

	printf("Enter value for items\n");
	for(i = 0;i < n; i++)
	{
		scanf("%d", &val[i]);
	}
	printf("Enter weight of items\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
	}

	printf("Enter size of knapsack:");
	scanf("%d", &W);
	res=knapSack(W,wt,val,n);

	printf("Profit=%d\n", res);
}
