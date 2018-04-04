#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("enter the number ");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;
		
	}while(i<=n);
	printf("the sum of number is %d",sum);
	
}
