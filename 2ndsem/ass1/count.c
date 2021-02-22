//count the elemnts how many time present in array
void count(int[],int,int);
#include<stdio.h>
main()
{
	int arr[50],i,size,elm;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element which you want to search\n");
	scanf("%d",&elm);
	count(arr,size,elm);
}
void count(int arr[],int size,int elm)
{
	int i,c=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==elm)
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("searching element is not found\n");
	}
	else
	{
		printf("element is present %d times\n",c);
	}
}
		
	

		
	
	
	
