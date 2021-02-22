//spilit the array into two seperate array
#include<stdio.h>
void split(int[],int[],int[],int,int);
main()
{
	int arr[0],arr1[50],arr2[5],i,size,pos;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter position from where you want to split\n");
	scanf("%d",&pos);
	split(arr,arr1,arr2,size,pos);
}
void split(int arr[],int arr1[],int arr2[],int size,int pos)
{
	int i=0,j=0,k=0;
	while(i<size)
	{
		arr1[i]=arr[pos-1];
		pos++;
		i++;
	}
	for(j=0;j<i;j++)
	{
		printf("%d\t",arr1[j]);
	}
}

	
	
