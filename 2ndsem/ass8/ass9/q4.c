//Binary search using recurision
#include<stdio.h>
int binary(int[],int,int,int);
main()
{
	int arr[100],size,i,res,key,low,high;
	low=0;
	high=size-1;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("Enter values in array in sorted order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter values which u want to search\n");
	scanf("%d",&key);
        res=binary(arr,key,low,high);
	if(res==-1)
	{
		printf("searching element is not found\n");
	}
	else
	{
		printf("element is found\n");
	}
}
int binary(int a[],int key,int low,int high)
{
	int mid;
	mid=(low+high)/2;
	if(a[mid]==key)
	{
		return mid;
	}
	else if(key<a[mid])
	{
		high=mid-1;
		binary(a,key,low,high);
	}
	else
	{
		low=mid+1;
		binary(a,key,low,high);
	}
	return -1;
}

