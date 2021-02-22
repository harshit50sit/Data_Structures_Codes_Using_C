//search a value in binary tree present or not
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
void search(struct node*,int);
main()
{
	root=NULL;
	int ch,x,val;
	while(1)
	{
		printf("\n1-Insert\n2-Searching\n3-Preorder traversal\n4-Inorder traversal\n5-Postorder Traversal\n6-Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter value of x\n");
			       scanf("%d",&x);
			       root=insert(root,x);
			       break;
			case 2:printf("enter value for searching\n");
			       scanf("%d",&val);
			       search(root,val);
			       break;
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
void search(struct node *temp,int val)
{
	struct node *ptr;
	ptr=temp;
	while((ptr!=NULL)&&(val!=ptr->data))
	{
		if(val<ptr->data)
		{
			ptr=ptr->left;
		}
		else
		{
			ptr=ptr->right;
		}
	}
	if(ptr==NULL)
	{
		printf("element not found\n");
	}
	else
	{
		printf("element found\n");
//		break;
	}
}




				
					       

					       
