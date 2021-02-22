//imlement the linear search using user defined function and input the array in sorted order
#include<stdio.h>
int search(int[],int,int);
main()
{
	int arr[100],size,i,val,res;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array in sorted way\n");
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
	int i=0,c=0;
	while((val>=arr[i])&&(i<size))
	{
		if(val==arr[i])
		{
			c=1;
			break;
		}
		i++;
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


