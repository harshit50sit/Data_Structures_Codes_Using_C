//selection sort
#include<stdio.h>
void selection(int[],int);
main()
{
	int arr[50],size,i;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection(arr,size);
}
void selection(int a[],int size)
{
	int i,pos,j,large;
	for(i=size-1;i>0;i--)
	{
		large=a[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(a[j]>large)
			{
				large=a[j];
				pos=j;
			}
		}
	
	
		a[pos]=a[i];
		a[i]=large;

	}

	printf("array is sorted in ascending order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
