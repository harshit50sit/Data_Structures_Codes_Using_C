#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
void insert(struct node **,int);
void inorder(struct node *);
struct node *findmin(struct node *);
main()
{
	struct node *root=NULL,*min;
	int ch,x;
	while(1)
	{
		printf("1-Insert\n2-Traverse Inorder\n3-findmin\n4-exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter value\n");
			       scanf("%d",&x);
			      insert(&root,x);
			      break;
			case 2:inorder(root);
			       break;
		        case 3:min=findmin(root);
			       if(min==NULL)
			       {
				       printf("No data in tree\n");
			       }
			       else
			       {
				       printf("Minimum element is\n");
				       printf("%d\n",min->data);
			       }
		       case 4:exit(0);
			      break;
		       default:printf("wrong choice\n");
		}
	}
}
void insert(struct node **r,int x)
{
	if((*r)==NULL)
	{
		(*r)=(struct node*)malloc(sizeof(struct node));
		(*r)->data=x;
	        (*r)->left=NULL;
		(*r)->right=NULL;
	}
	else
	{
		if(x<(*r)->data)
		{
			insert(&((*r)->left),x);
		}
		else
		{
			insert(&((*r)->right),x);
		}
	}
}
void inorder(struct node *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("\n%d\t",temp->data);
		inorder(temp->right);
	}
}
struct node *findmin(struct node *temp)
{
	if(temp==NULL)
	{
		return NULL;
	}
	else
	{
		if(temp->left==NULL)
		{
			return temp;
		}
		else
		{
			return findmin(temp->left);
		}
	}
}

