#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("enter the number ");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
		sum=sum+i;
	}
		i++;
		
	}while(i<=n);
	printf("the sum of number is %d",sum);
	
}
