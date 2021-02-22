#include<stdio.h>
int heap_size,length=5;
void MAX_HEAPIFY(int A[],int i)
{
	int l,r,largest,temp;
	l=2*i+1;
	r=2*i+2;
	if((l<=heap_size)&&(A[l]>A[i]))
	{
		largest=l;
	}
	else
	{
		largest=i;
	}
	if((r<=heap_size)&&(A[r]>A[largest]))
	{
		largest=r;
	}
	if(largest!=i)
	{
		temp=A[largest];
		A[largest]=A[i];
		A[i]=temp;
		MAX_HEAPIFY(A,largest);
	}
}
			

void BUILD_MAX_HEAP(int A[])
{
	int i=0;
	heap_size=length-1;
	for(i=(length/2);i>=0;i--)
	{
		MAX_HEAPIFY(A,i);
	}
}
void heap_sort(int A[])
{
	int i=0,temp;
	BUILD_MAX_HEAP(A);
	for(i=length-1;i>0;i--)
	{
		temp=A[i];
		A[i]=A[0];
		A[0]=temp;
		heap_size--;
		MAX_HEAPIFY(A,0);
	}
}

main()
{
	int A[length],i;
	heap_size=length;
	printf("Enter elements in heap\n");
	for(i=0;i<length;i++)
	{
		scanf("%d",&A[i]);
	}
	heap_sort(A);
	printf("Sorted array is\n");
	for(i=0;i<length;i++)
	{
		printf("%d\t",A[i]);
	}
}



	
