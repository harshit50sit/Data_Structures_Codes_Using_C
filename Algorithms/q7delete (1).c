//delete value from a binary tree 
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
struct node *delete(struct node*,int);
struct node *findmin(struct node*);
main()
{
	root=NULL;
	struct node *res,*res1;
	int ch,x,val;
	while(1)
	{
		printf("\n1-Insert\n2-Deletion the particular value\n3-Preorder traversal\n4-Inorder traversal\n5-Postorder Traversal\n6-Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter value of x\n");
			       scanf("%d",&x);
			       root=insert(root,x);
			       break;
			case 2:printf("enter value of deleteion\n");
			       scanf("%d",&val);
			       res=delete(root,val);
			case 3:preorder(root);
			       break;
			case 4:inorder(root);
			       break;
			case 5:postorder(root);
			       break;
			case 6:exit(0);
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
struct node *delete(struct node *root,int val)
{
	struct node *temp;
	if(root==NULL)
	{
		return NULL;
	}
	if(val<root->data)
	{
		root->left=delete(root->left,val);
	}
	else if(val>root->data)
	{
		root->right=delete(root->right,val);
	}
	else
	{
		if(root->left==NULL)
		{
			temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			temp=root->left;
			free(root);
			return temp;
		}
		temp=findmin(root->right);
		root->data=temp->data;
		root->right=delete(root->right,temp->data);
	}
	return root;
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
		




				
					       

					       
