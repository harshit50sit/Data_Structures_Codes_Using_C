#include<stdio.h>

#include<stdlib.h>
#define MAX 10
void floyd(int);
int w[MAX][MAX], d[MAX][MAX][MAX];
int min(int a, int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}

}

main()
{
	int i, j,v;
	
	printf("enter the no. of vertices: ");
	scanf("%d",&v);
	printf("enter the weights \n");
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		{
			scanf("%d",&w[i][j]);
		}
	}
	floyd(v);
}

 void floyd(int v)
{
	 
		 int k, i,j;
		 k=0;
		 for (i=1;i<=v;i++)
		 {
			 for(j=1;j<=v;j++)
			 {
				 if(w[i][j]==0)
				 {
					 d[k][i][j]=999;
				 }
				 else  
				 {
					 d[k][i][j]=w[i][j];
				 }
			 }
		 }
		 for(k=1;k<=v;k++)
		 {

			 for (i=1;i<=v;i++)
			 {

				 for(j=1;j<=v;j++)
				 {
					 d[k][i][j]=min(d[k-1][i][j], d[k-1][i][k]+ d[k-1][k][j]);
				 }
			 }
		 }
	 
 for(k=1;k<=v;k++)
  {
	  printf(" k=%d \n",k);
	  for(i=1;i<=v;i++)
	  {
		  printf("\n");
		  for(j=1;j<=v;j++)
		  {
			  printf("\t %d",d[k][i][j]);
		  }
	  }
	  printf("\n \n ");
  }
}

