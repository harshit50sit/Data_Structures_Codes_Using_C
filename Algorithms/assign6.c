#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int x[10];
int place(k,i)
{
	int j;
	for(j=0;j<=k-1;j++)
	{
		if((x[j]==i)||(abs(k-j)==abs(i-x[j])))
		{
			return 0;
		}
	}
	return 1;
}
	
void NQueen(int k,int n)
{
	int i,t;
	for(i=0;i<n;i++)
	{
		if((place(k,i))==1)		
		{
			x[k]=i;
			if(k==n-1)
			{
				for(t=0;t<n;t++)
				{
					printf("%d\t",x[t]+1);
				}
				printf("\n");
			}
			else
			{
				NQueen(k+1,n);
			}
		}
	}
}
main()
{
	int n,i;
	printf("Enter no of Queens\n");
	scanf("%d",&n);
	NQueen(0,n);
}
