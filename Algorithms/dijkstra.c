#include<stdio.h>
int vcount,G[10][10];
struct node
{
	int d;
	int parent;
}
v[10];
void initialise_single_source(int src)
{
	int i;
	for(i=0;i<vcount;i++)
	{
		v[i].d=999;
		v[i].parent=-1;
	}
	v[src].d=0;
}
void relax(int x,int y)
{
	if(v[y].d>v[x].d+G[x][y])
	{
		v[y].d=v[x].d+G[x][y];
		v[y].parent=x;
	}

}
int extract_min(int *p)
{
	int i,min=999,x;
	for(i=0;i<vcount;i++)
	{
		if(*(p+i)==0 && v[i].d<min)
		{
			min=v[i].d;
			x=i;
		}
	}
	*(p+x)=i;
	return x;
}

void dijkstra(int src)
{
	int i,vc=vcount,u,v,Q[50];
	initialise_single_source(src);
	for(i=0;i<vcount;i++)
	{
		Q[i]=0;
	}
	while(vc!=0)
		{
			u=extract_min(Q);
			for(v=0;v<vcount;v++)
				{
					if(G[u][v]!=0)
					{
						relax(u,v);
					}
				}
				vc--;
		}
}
main()
{
	int i,j,src,dest;
	printf("enter the number of vertices: ");
	scanf("%d",&vcount);
	printf("enter the weighted graph:\n");
	for(i=0;i<vcount;i++)
	{
		for(j=0;j<vcount;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	printf("enter the soource: ");
	scanf("%d",&src);
	printf("enter the destination: ");
	scanf("%d",&dest);
	dijkstra(src);
	printf("enter the cost to travel from %d to %d is %d\n",src,dest,v[dest].d);
	printf("THE PATH LOOKS LIKE:\n");
	while(dest!=src)
	{
		printf("%d<--",dest);
		dest=v[dest].parent;
	
	}
	printf("%d\n",src);
}
	

