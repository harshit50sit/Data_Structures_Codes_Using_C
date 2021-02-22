#include<stdio.h>
float x[20];
struct item
{
	float val;
	float wt;
}I[20];
void sort(int n)
{
	struct item temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if((I[j].val)/(I[j].wt)<=(I[j+1].val)/(I[j+1].wt))
			{
				temp=I[j];
				I[j]=I[j+1];
				I[j+1]= temp;
				
	
			}
		}
	}

}
void FK(int n,int W)
{
	sort(n);
	int i;
	for(i=0;i<n;i++)
	{
		x[i]=0;
	}
	float weight=0;
	i=0;
	while((weight+I[i].wt)<=W)
	{
		x[i]=1;
		weight=weight+I[i].wt;
		i++;
	}
	x[i]=(W-weight)/I[i].wt;
}
main()
{
	int n,i;
	float W,a=0;
	printf("Enter the no of items\n");
	scanf("%d",&n);
	printf("Enter the value of the items\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&I[i].val);
	}
	printf("Enter the weight of the items\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&I[i].wt);
	}
	printf("Enter the knapsack capacity\n");

	scanf("%f",&W);
//	sort(n);
	for(i=0;i<n;i++)
	{
		printf("%f\t%f\t",I[i].val,I[i].wt);
	}
	FK(n,W);
	for(i=0;i<n;i++)
	{
		a=a+x[i]*I[i].val;
	}
	printf("Total value of the selected items:%f\n",a);
}


