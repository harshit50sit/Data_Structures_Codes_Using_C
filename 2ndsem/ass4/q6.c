//print the data acoording to their priority

#include<stdio.h>
void prior(int[],int[],int);
main()
{
	int pri[20],arr[30],i,j,size;
	printf("enter size of array data\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the priopity starting from 1\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&pri[i]);
	}
	prior(arr,pri,size);
}
void prior(int arr[],int pri[],int size)
{
	int i,j,p=1,c=0;
	for(i=0;;i++)
	{
		if(i==size)
		{
			i=0;
		}
	        if(pri[i]==p)
		{
			printf("%d\t",arr[i]);
			c++;
			p++;
		}
		if(c==size)
		{
			break;
		}
	}
}
		
		
		
		
	




