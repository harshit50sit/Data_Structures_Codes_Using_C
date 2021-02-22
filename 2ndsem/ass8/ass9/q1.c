//imlement the linear search using user defined function
#include<stdio.h>
int search(int[],int,int);
main()
{
	int arr[100],size,i,val,res;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array in random way\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter value which you want to search\n");
	scanf("%d",&val);
	res=search(arr,size,val);
	if(res==-1)
	{
		printf("searching element is not found\n");
	}
	else
	{
		printf("element is found in index %d\n",res);
	}
}
int search(int arr[],int size,int val)
{
	int i,c=0;
	for(i=0;i<size;i++)
	{
		if(val==arr[i])
		{
			c=1;
			break;
		}
	}
	if(c>0)
	{
		return i;
	}
	else
	{
		return -1;
	}
}


