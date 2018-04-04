#include<stdio.h>
int main()
{
	int x=1,sum=1,n;
	printf("enter n ");
	scanf("%d",&n);
	while(x<=n)
	{
		sum=sum*x;
		x++;
	}
	printf(" sum is %d ",sum);
}
