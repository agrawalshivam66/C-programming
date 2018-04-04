#include<stdio.h>
int main()
{
	int n=0,v=0,d=0,t=0,ta=0;
	printf("enter the quantitly of item ");
	scanf("%d",&n);
	printf("enter the value of item ");
	scanf("%d",&v);
	printf("enter the discount of item ");
	scanf("%d",&d);
	d=d*n*v/100;
	printf("enter the tax of item ");
	scanf("%d",&t);
	t=t*n*v/100;
	ta=(n*v)+t-d;
	printf("the total amount of item is %d",ta);
}

