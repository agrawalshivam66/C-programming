#include<stdio.h>
#include<stdlib.h>
struct node
{
	int name;
	struct node* next;
}*q,*t;
void prints(struct node* start,int i);
struct node* insert(struct node* start);
int n;

void create()
{
int x;
	printf("enter the number of nodes  ");
	scanf("%d",&n);
	struct node* a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=NULL;
	}
	for(int i=0;i<n;i++)
	{
		printf("Enter the number of neighbours of %d  ",i+1);
		scanf("%d",&x);
		for(int j=0;j<x;j++)
		{
			a[i]=insert(a[i]);
		}
	}
	
for(int i=0;i<n;i++)
	{
	prints(a[i],i+1);
	}
}

struct node* insert(struct node* start)
{
	t=(struct node*)malloc(sizeof(struct node));
	t->next=NULL;
	printf("\nEnter the name of node  ");
	scanf("%d",&t->name);
	if(start==NULL)
	{
		start=t;
	}

	else{
		q->next=t;
	}
		q=t;
	
	return(start);
}

void prints(struct node* start,int i)
{
	if(start==NULL)
	{
		printf("no neighbours present");
	}
	else{
	
	q=start;
		while(q!=NULL)
		{
			printf("\nTHE neighbours of the node %d are %d",i,q->name);
			q=q->next;
		}
	}
}


int main()
{
create();	
}
