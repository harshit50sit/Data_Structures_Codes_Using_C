//menu driven programme
#include<stdio.h>
void insertbeg(int[],int);
void insertspc(int[],int);
void insertend(int[],int);
void delbeg(int[],int);
void delspc(int[],int);
void delend(int[],int);
main()
{
	int arr[100],i,size,choice;
	char ch='y';
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(ch=='y')
	{
	printf("enter choice that you want to do a following operations\n1.Insert at beginning\n2.insert at specific postion\n3.insert at end\n4.delete from beginning\n5.delete from specific position\n6.delet from end\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:insertbeg(arr,size);
		       break;
		case 2:insertspc(arr,size);
		       break;
		case 3:insertend(arr,size);
		       break;
		case 4:delbeg(arr,size);
		       break;
		case 5:delspc(arr,size);
		       break;
	        case 6:delend(arr,size);
		       break;
		default:printf("wrong choice\n");
	}
	printf("\nDo you want to continue press Y or not press n\n");
	scanf(" %c",&ch);
	if(ch=='n')
	{
		break;
	}
	printf("enter size of an array\n");
	scanf("%d",&size);
	printf("enter values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	}
	
}
void insertbeg(int arr[],int size1)
{
	int i,elm;
	for(i=size1-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	printf("enter element you want to insert\n");
	scanf("%d",&elm);
	arr[0]=elm;
	for(i=0;i<=size1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void insertspc(int arr[],int size)
{
	int i,pos,elm,temp;
	printf("enter position which you want to insert\n");
	scanf("%d",&pos);
	printf("enter element\n");
	scanf("%d",&elm);
	temp=arr[pos-1];
	for(i=size-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=elm;
	arr[pos]=temp;
	for(i=0;i<=size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void insertend(int arr[],int size)
{
	int i,elm;
	printf("enter element\n");
	scanf("%d",&elm);
	arr[size]=elm;
	for(i=0;i<=size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void delbeg(int arr[],int size)
{
	int i;
	for(i=1;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void delspc(int arr[],int size)
{
	int i,pos;
	printf("enter position from where you want to delete\n");
	scanf("%d",&pos);
	for(i=pos-1;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void delend(int arr[],int size)
{
	int i;
	for(i=0;i<size-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
			
			

			


	
			     
		      



	
