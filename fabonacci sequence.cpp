#include<stdio.h>
int main()
{
	int y=1,x=0,sum=0,n;
	printf("enter no. terms ");
	scanf("%d",&n);
	while(x<n)
    {
	sum=sum+y;
	 printf("%d ",sum);
	 y=sum;	
	x++;
	}
	
}
