//implemention of binary tree of postorder
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
}*root,*newnode;
struct node *create();
void traverse(struct node*);
main()
{
        root=create();
	printf("The tree elements are\n");
	traverse(root);
}
struct node *create()
{
	struct node *newnode;
	int x;
	printf("Enter data or -1 for no data\n");
	scanf("%d",&x);
	if(x==-1)
	{
		return NULL;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	printf("Enter left child of %d\n",x);
//	scanf("%d",&x);
	newnode->left=create();
	printf("Enter right child of %d\n",x);
//	scanf("%d",&x);
	newnode->right=create();
	return newnode;
}
void traverse(struct node *ptr)
{
	if(ptr!=NULL)
	{
	
		traverse(ptr->left);
		traverse(ptr->right);
		printf("\n%d\t",ptr->data);
	}

}

























































