#include<stdio.h>
int main()
{
	int n=0,v=0,d=0,t=0,ta=0;
	printf("enter the quantity of rs.10 coins ");
	scanf("%d",&n);
	printf("enter the quantity of rs.5 coins ");
	scanf("%d",&v);
	printf("enter the quantity of rs.2 coins ");
	scanf("%d",&d);
	printf("enter the quantity of rs.1 coins ");
	scanf("%d",&t);
ta=(n*10)+(v*5)+(d*2)+(t);
	printf("the total amount of item is %d",ta);
}

