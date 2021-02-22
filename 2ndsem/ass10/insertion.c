//insertion SORT
#include<stdio.h>
void insertion(int[],int);
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
	insertion(arr,size);
		
}
void insertion(int a[],int size)
{
	int j,i=0,key;
	for(j=1;j<size;j++)
	{
		key=a[j];
		i=j-1;
	
	while((a[i]>key)&&(i>-1))
	{
		a[i+1]=a[i];
		i=i-1;
	}
	a[i+1]=key;
	}
	printf("array is sorted in ascending order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}


	
}

