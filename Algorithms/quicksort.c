#include<stdio.h>
void input(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//      return arr;
}
display(int arr[],int size)
{
	int i;
	printf("sorted array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int partition(int arr[],int p,int r)
{
	int x,i,j,temp1,temp2;
	x=arr[r];
	i=-1;
	for(j=p;j<r;j++)
	{
		if(arr[j]<=x)
		{
			i=i+1;
			temp1=arr[j];
			arr[j]=arr[i];
			arr[i]=temp1;
		}
		temp2=arr[r];
		arr[r]=arr[i+1];
		arr[i+1]=temp2;
	}
	return (i+1);
}

void quick_sort(int arr[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(arr,p,r);
		quick_sort(arr,p,q-1);
		quick_sort(arr,q+1,r);
	}
}
main()
{
	int arr[50],p=0,size,r;
	printf("Enter size of an array\n");
	scanf("%d",&size);
	r=size-1;
	printf("Taking input in array\n");
	input(arr,size);
	quick_sort(arr,p,r);
	display(arr,size);
}

