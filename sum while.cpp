#include<stdio.h>
int main()
{
	int x=0,sum=0,n;
	printf("enter n ");
	scanf("%d",&n);
	while(x<=n)
	{
		sum=sum+x;
		x++;
	}
	printf(" sum is %d ",sum);
}
