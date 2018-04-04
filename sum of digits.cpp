#include<stdio.h>
int main()
{
	int i,a,b=0,c=0;
	printf("enter the 3 digit number ");
	scanf("%d",&a);
	for(i=0;i<3;i++)
	{
		b=a%10;
		a=a/10;
		c=c+b;
	}
	printf("the sum of ditits is %d",c);
	
	
	
	
}
