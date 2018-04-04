#include<stdio.h>
int main()
{
	int rev=0,rem=0,i=1,n;
	printf("enter the number ");
	scanf("%d",&n);
	do
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		i++;
		
	}while(n>0);
	printf("the reverse of number is %d",rev);
	
}
