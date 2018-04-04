#include<stdio.h>
int main()
{
	int s=0,ta=0,da=0,ma=0,t=0;
	printf("enter the salary ");
	scanf("%d",&s);
	da=2*(s/100);
	ta=10*(s/100);
	ma=20*(s/100);
	t=(s+ta+da)-ma;
	printf("the final salary of person is %d",t);
}
