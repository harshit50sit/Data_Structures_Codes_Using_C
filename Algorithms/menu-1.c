//Menu driven program to add,search,modify,delete,display student record
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char *name;
	int reg;
	char branch[20];
	int sem;
}st[30];
int c=-1;
int i=1;
void delete()
{
	
	printf("Enter the reg no. of the student\n");
	int r;
	scanf("%d",&r);
	int flag=-1;
	int i;
	int j;
	for(i=0;i<=c;i++)
	{
		if(r==st[i].reg)
		{
			j=i;
			if(j<c)
			{
				for(;j<c;j++)
				{
					st[j]=st[j+1];
				}
			}
			c--;
			flag=1;
		}
	}
	if(flag)
		printf("Record deleted\n");
	else
		printf("Record not deleted\n");
}

void search()
{
	int r;
	printf("Enter the reg no.\n");
	scanf("%d",&r);
	int i;
	int flag=0;
	for(i=0;i<=c;i++)
	{
		if(r==st[i].reg)
		{
			flag++;
			break;
		}
	}
	if(flag > 0)
		printf("Record found\n");
	else
		printf("Record not found\n");
}
void display()
{
	int i;
	for(i=0;i<=c;i++)
	{
		printf("Student %d\n",i+1);
		printf("Name: %s\n",st[i].name);
		printf("Registration no: %d\n",st[i].reg);
		printf("Branch: %s\n",st[i].branch);
		printf("Semester: %d\n",st[i].sem);
	}
}
void add()
{
	c++;
	printf("Enter name of the student\n");
	st[c].name=(char *)malloc(sizeof(char)*30);
	scanf("%s",st[c].name);
	printf("Enter reg no\n");
	scanf("%d",&st[c].reg);
	printf("Enter branch\n");
	scanf("%s",st[c].branch);
	printf("Enter semester\n");
	scanf("%d",&st[c].sem);
}
void modify()
{
	printf("Enter the reg no. of the student to be modified\n");
	int r;
	scanf("%d",&r);
	int i;
	int flag=-1;
	for(i=0;i<=c;i++)
	{
		if(r==st[i].reg)
		{
			printf("Enter new name\n");
			scanf("%s",st[i].name);
			printf("Enter new branch\n");
			scanf("%s",st[i].branch);
			printf("Enter new semester\n");
			scanf("%d",&st[i].sem);
			flag=1;
			break;
		}
		if(flag)
			printf("Record modified\n");
		else
			printf("Wrong registration entered\n");
	}
}

void main()
{
	int ch;
	while(1)
	{
		printf("1-->add student record\n2-->search student record\n3-->Modify a student record\n4-->Delete a student record\n5-->Display record\n6-->Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add();
				   break;
			case 2:search();
				   break;
			case 3:modify();
				   break;
			case 4:delete();
				   break;
			case 5:display();
				   break;
			case 6:exit(0);
				   break;
			default:printf("wrong choice\n");
		}
	}
}




			



				


