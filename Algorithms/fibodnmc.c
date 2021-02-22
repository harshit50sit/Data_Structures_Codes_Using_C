#include<stdio.h>
int x[50];
int fibo(int n)
{
	int i;
	x[1]=0;
	x[2]=1;
	for(i=3;i<=n;i++)
	{
		x[i]=x[i-1]+x[i-2];
	}
	return x[n];
}
main()
{
	int n,res,i;
	printf("Enter nth value\n");
	scanf("%d",&n);
//	res=fibo(n);
//	printf("Result of fibonacci %d=%d\n",n,res);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fibo(i));
	}
}
	
