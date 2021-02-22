//merge the elements in sorted way
#include<stdio.h>
void merge(int [],int [],int,int);
main()
{
	int arr[100],arr1[100],arr2[100],i,j,size1,size2;
	printf("enter size of an 1st array\n");
	scanf("%d",&size1);
	printf("enter size of an 2nd array\n");
	scanf("%d",&size2);
	printf("enter values in 1st array\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter values in 2nd array\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr1[i]);
	}
	merge(arr,arr1,size1,size2);
}
void merge(int arr[],int arr1[],int range1,int range2)
{
	int i=0,j,temp,size3,k=0;
	i=range1;
	for(j=0;j<range2;j++)
	{
		arr[i]=arr1[j];
		i++;
	}
	size3=range1+range2;
	printf("the array is merged in asending order\n");
	for(i=0;i<size3;i++)
	{
		for(j=0;j<size3-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size3;i++)
	{
		printf("%d\t",arr[i]);
	}
}
