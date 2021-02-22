#include<stdio.h>
void even(int[],int[],int);
main()
{
	int arr[50],arr1[50],i,size;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	even(arr,arr1,size);
}
void even(int arr[],int arr1[],int range)
{
	int i,j=0;
	printf("even elements indices are\n");
	for(i=0;i<range;i++)
	{
		if(arr[i]%2==0)
		{
			arr1[j]=arr[i];
			j++;
			printf("%d\t",i);
		}
	}
	printf("\neven elements are\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",arr1[i]);
	}
}
		
		
