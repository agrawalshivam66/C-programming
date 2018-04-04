#include<stdio.h>
int main()
{
	int sum=0,i=0,n,a=0;
	printf("enter the number ");
	scanf("%d",&n);
	
	do
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
		i++;
		
	}while(n>0);
	printf("the sum of number is %d",sum);
	
}
