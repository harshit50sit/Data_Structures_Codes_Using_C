//binary to decimal
#include<stdio.h>
#include<math.h>
int size=10;
int stack[20];
int top=-1;
void push(int);
void pop();
main()
{
	int no,res;
	printf("enter binary number\n");
	scanf("%d",&no);
	while(no>0)
	{
		res=no%10;
		push(res);
		no=no/10;
	}
	pop();
}
void push(int res)
{
	if(top==size)
	{
		printf("stack is full\n");
		
	}
	else
	{

			top++;
			stack[top]=res;
		
	}
}
void pop()
{
	int i,res=0,c=0;
	if(top==-1)
	{
		printf("stack is empty\n");
	
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			res=res+(stack[i]*(pow(2,c)));
			c++;
		}
		printf("decimal no is %d\n",res);

		
	}
	
}



