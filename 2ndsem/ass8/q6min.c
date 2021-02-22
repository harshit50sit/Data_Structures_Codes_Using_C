//search a mum value from a binary tree 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
}*root,*newnode;
struct node *insert(struct node*,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
struct node *min(struct node*);
struct node *max(struct node*);
main()
{
	root=NULL;
	struct node *res,*res1;
	int ch,x,val;
	while(1)
	{
		printf("\n1-Insert\n2-find minimum element\n3-Find maximum element\n4-Preorder traversal\n5-Inorder traversal\n6-Postorder Traversal\n7-Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter value of x\n");
			       scanf("%d",&x);
			       root=insert(root,x);
			       break;
			case 2:res=min(root);
			       if(res==NULL)
			       {
				       printf("tree is empty\n");
			       }
			       else
			       {
			       printf("minimum element is\n");
			       printf("%d\n",res->data);
			       }
			       break;
			case 3:res1=max(root);
			       if(res1==NULL)
			       {
				       printf("tree is empty\n");
			       }
			       else
			       {
			       printf("Maximum element is\n");
			       printf("%d\n",res1->data);
			       }
			       break;
			case 4:preorder(root);
			       break;
			case 5:inorder(root);
			       break;
			case 6:postorder(root);
			       break;
			case 7:exit(0);
		       default:printf("wrong choice\n");
		}
	}
}
struct node *insert(struct node *newnode,int x)
{
	if(newnode==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->left=NULL;
		newnode->right=NULL;
	}
	else
	{
		if(x<newnode->data)
		{
			newnode->left=insert(newnode->left,x);
		}
		else
		{
			newnode->right=insert(newnode->right,x);
		}
	}
	return newnode;
}
void preorder(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("\n%d\t",temp->data);
		preorder(temp->left);
		preorder(temp->right);
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
void postorder(struct node *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		printf("\n%d\t",temp->data);
	}
}
struct node *min(struct node *temp)
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
			return min(temp->left);
		}
	}
}
struct node *max(struct node *ptr)
{
	if(ptr==NULL)
	{
		return NULL;
	}
	else
	{
		if(ptr->right==NULL)
		{
			return ptr;
		}
		else
		{
			return max(ptr->right);
		}
	}
}




				
					       

					       
