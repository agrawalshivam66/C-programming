#include<stdio.h>
#include<string.h>
int main()
{
	int salary=0,amount=0;
	char s[10];
	char se[6]="male";
	printf("enter the salary of worker ");
	scanf("%d",&salary);
	printf("enter the sex of worker ");
	scanf("%s",&s);
	if(salary<10000)
	{
		if(s==se)
		{
		 amount=salary+(7*salary)/100;
		 printf("The amount of worker is %d ",amount);
		}
		else
		{
		 amount=salary+(12*salary)/100;
		  printf("The amount of worker is %d ",amount);
		}
		
	}
		else
	{
		if(s==se)
		{
		 amount=salary+(5*salary)/100;
		  printf("The amount of worker is %d ",amount);
		}
		else
		{
		 amount=salary+(10*salary)/100;
		  printf("The amount of worker is %d ",amount);
		}
	}
}
