#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	printf("enter the 3 digit number ");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	e=(b*100)+(c*10)+d;
	printf("the reverce of digits is %d",e);
}

