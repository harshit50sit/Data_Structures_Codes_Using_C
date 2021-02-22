#include<stdio.h>
void input(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
//	return arr;
}
void display(int arr[],int size)
{
	int i;
	printf("sorted array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void merge(int arr[],int p,int q,int r)
{
	int a[50],b[50],i,j,k,n1,n2;
	n1=q-p+1;
	n2=r-q;
	for(i=0;i<n1;i++)
	{
		a[i]=arr[p+i];
	}
	for(j=0;j<n2;j++)
	{
		b[j]=arr[q+1+j];
	}
	a[n1]=999;
	b[n2]=999;
	i=0;
	j=0;
	for(k=p;k<=r;k++)
	{
		if(a[i]<=b[j])
		{
			arr[k]=a[i];
			i++;
		}
		else
		{
			arr[k]=b[j];
			j++;
		}
	}
}

void merge_sort(int arr[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(arr,p,q);
		merge_sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}
main()
{
	int arr[50],p=0,size,r,res[50];
	printf("Enter size of an array\n");
	scanf("%d",&size);
	r=size-1;
	printf("Taking input in array\n");
	input(arr,size);
	merge_sort(arr,p,r);
	display(arr,size);
}

