//largest element in an array
#include<stdio.h>
void largest(int*,int,int*);
main()
{
	int arr[50],i,size,large;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in afrray\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=*(arr);
	largest(arr,size,&large);
	printf("largest element in array is\n%d\n",large);
}
void largest(int *arr,int size,int *large)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(*(arr+i)>*large)
		{
			*large=*(arr+i);
		}
	}
}
				
