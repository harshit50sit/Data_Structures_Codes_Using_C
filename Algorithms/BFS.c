#include<stdio.h>
#define max 10
int nv;
struct vertex
{
	char color;
	int d,pi;
}v[max];
int Q[max];
int rear=-1,front=0;
void print_path(int s,int V)
{
	if(s==V)
	{
		printf("%d---->",s);
	}
	else if(v[V].pi==-1)
	{
		printf("No path from s to v\n");
	}
	else
	{
		print_path(s,v[V].pi);
		printf("%d---->",V);
	}
}
void ENQUE(int x)
{
	if(rear==max-1)
	{
		printf("Overflow\n");
	}
	else
	{
		Q[++rear]=x;
	}
}
int DEQUE()
{
	int i;
	if(front>rear)
	{
		printf("Underflow\n");
		return -1;
	}
	else
	{
		i=Q[front];

		if(front==rear)
		{
			rear=-1;
			front=0;
		}
		else
		{
			front++;
		}
		return i;
	}
}

void BFS(int G[8][8],int s)
{
	int i,j;
	for(i=0;i<nv;i++)
	{
		if(i==s)
		{
			continue;
		}
		v[i].color='W';
		v[i].d=1000;
		v[i].pi=-1;
	}
	v[s].color='G';
	v[s].d=0;
	v[s].pi=-1;
	ENQUE(s);
	printf("The vertex no is\n");
	while(front<=rear)
	{
		i=DEQUE();
		for(j=0;j<nv;j++)
		{
			if(G[i][j]==1 && v[j].color=='W')
			{
				v[j].color='G';
				v[j].d=v[i].d+1;
				v[j].pi=i;
				ENQUE(j);
			}
		}
		v[i].color='B';
		printf("%d\t",i);
	}
}
main()
{
	int G[8][8]={
		0,1,0,0,1,0,0,0,
		1,0,0,0,0,1,0,0,
		0,0,0,1,0,1,0,0,
		0,0,1,0,0,0,1,1,
		1,0,0,0,0,0,0,0,
		0,1,1,0,0,0,1,0,
		0,0,0,1,0,1,0,1,
		0,0,0,1,0,0,1,1
	};
	int s,i,j,end;
	printf("Enter the number of vertices: ");
	scanf("%d",&nv);
	printf("Enter the starting vertex\n");
	scanf("%d",&s);
	BFS(G,s);
	printf("\nEnter the destination\n");
	scanf("%d",&end);
	printf("\nPath of graph is\n");
	print_path(s,end);
}
	
