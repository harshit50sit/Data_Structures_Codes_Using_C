//Binary search
#include<stdio.h>
int binary(int[],int,int);
main()
{
	int arr[100],size,i,res,key;
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("Enter values in array in sorted order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter values which u want to search\n");
	scanf("%d",&key);
        res=binary(arr,size,key);
	if(res==-1)
	{
		printf("searching element is not found\n");
	}
	else
	{
		printf("element is found\n");
	}
}
int binary(int a[],int size,int key)
{
	int low,high,mid;
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=low+high/2;
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
ry search
#include<stdio.h>
int binary(int[],int,int);
main()
{
	        int arr[100],size,i,res,key;
		        printf("enter size of an array\n");
			        scanf("%d",&size);
				        printf("Enter values in array in sorted order\n");
					        for(i=0;i<size;i++)
							        {
									                scanf("%d",&arr[i]);
											        }
						        printf("Enter values which u want to search\n");
							        scanf("%d",&key);
								        res=binary(arr,size,key);
									        if(res==-1)
											        {
													                printf("searching element is not found\n");
															        }
										        else
												        {
														                printf("element is found\n");
																        }
}
int binary(int a[],int size,int key)
{
	        int low,high,mid;
		        low=0;
			        high=size-1;
				        while(low<=high)
						        {
								                mid=low+high/2;
										                if(key==a[mid])
													                {
																                        return mid;
																			                }
												                else if(key<a[mid])
															                {
																		                        high=mid-1;
																					                                                                                                                              1,15          Top

