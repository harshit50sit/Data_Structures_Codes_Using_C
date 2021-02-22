//Implemention of quick sort
#include<stdio.h>
void quick(int[],int,int);
int partition(int[],int,int);
main()
{
	int arr[50],i,size;
		
	printf("Enter size of an array\n");
	scanf("%d",&size);
	printf("enter value in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
        quick(arr,0,size-1);
	printf("array is in sorted order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void quick(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quick(a,p,q);
		quick(a,p+1,r);
	}
}
int partition(int a[],int p,int r)
{
	int i,j,pivot,temp;
	pivot=a[p];
	i=p-1;
	j=r+1;
	while(1)
	{
		do
		{
			j=j-1;
		}while(a[j]>pivot);
		do
		{
			i=i+1;
		}while(a[i]<pivot);
	
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	else
	{
		return j;

	}
	}
}
