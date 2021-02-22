//searching an element is present or not in an array
#include<stdio.h>
void search1(int[],int,int);
main()
{
	int arr[30],size,elm,i;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element which you want to search\n");
	scanf("%d",&elm);
	search1(arr,size,elm);
}
void search1(int arr[],int size,int elm)
{
	int i,flag=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==elm)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("searching element is found\n");
	}
	else
	{
		printf("element is not present\n");
	}
}
	
