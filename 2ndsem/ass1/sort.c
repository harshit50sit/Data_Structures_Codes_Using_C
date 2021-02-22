//sort an array in asending order
#include<stdio.h>
void sort(int[],int);
main()
{
	int arr[50],i,j,temp,size;
	printf("enter size oif an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,size);
}
void sort(int arr[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
              			temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
	printf("array is sorted in asxcending order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
		
