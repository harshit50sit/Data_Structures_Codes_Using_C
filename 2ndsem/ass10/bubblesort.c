//BUBBLE SORT
#include<stdio.h>
void bubble(int[],int);
main()
{
	int arr[50],i,size;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in arrau\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble(arr,size)
}
void bubble(int a[],int size)
{
	int i,j,temp;
	for(i=0;i,size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{

				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("array is sorted in asceding order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}

