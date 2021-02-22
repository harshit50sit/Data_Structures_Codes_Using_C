//store odd and even elemens in another 2 arrar
#include<stdio.h>
void store(int*,int*,int*,int);
main()
{
	int arr1[100],arr2[100],arr3[100],size1,i;
	printf("enter size of an array\n");
	scanf("%d",&size1);
	printf("enter values in array\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	store(arr1,arr2,arr3,size1);
}
void store(int *arr1,int *arr2,int *arr3,int size)
{
	int i,j=0,k=0;
	for(i=0;i<size;i++)
	{
		if(*(arr1+i)%2==0)
		{
			*(arr2+j)=*(arr1+i);
			j++;
		}
		else
		{
			*(arr3+k)=*(arr1+i);
			k++;
		}
	}
	printf("even no stored\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",*(arr2+i));
	}
	printf("\nodd no stored\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",*(arr3+i));
	}
}
				
				
	

			
