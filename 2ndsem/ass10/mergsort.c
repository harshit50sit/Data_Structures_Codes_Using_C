//implementing the merge sort
#include<stdio.h>
void mergesort(int[],int,int);
void merge(int[],int,int,int);
main()
{
	int arr[50],p,r,size,res[50],i;
	printf("enter size of an array\n");
	scanf("%d",&size);
	p=0;
	r=size-1;
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
       	mergesort(arr,p,r);
	printf("array is sorted in ascending order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void mergesort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}

}
void merge(int a[],int p,int q,int r)
{
	int b[50],l1,r1,i;
	l1=p,r1=q+1,i=p;
	while((l1<=q)&&(r1<=r))
	{
		if(a[l1]<a[r1])
		{
			b[i]=a[l1];
			l1=l1+1;
			i=i+1;
		}
		else
		{
			b[i]=a[r1];
			r1=r1+1;
			i=i+1;
		}
	}
	while(l1<=q)
	{
		b[i]=a[l1];
		l1=l1+1;
		i=i+1;
	}
	while(r1<=r)
	{
		b[i]=a[r1];
		r1=r1+1;
		i=i+1;
	}
	for(i=p;i<=r;i++)
	{
		a[i]=b[i];
	}

}

