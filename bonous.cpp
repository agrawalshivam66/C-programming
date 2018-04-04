#include<stdio.h>
main()
{
	int current=0,joined=0,salary=100000,bonus=10000;
	printf("enter the current year ");
	scanf("%d",&current);
	printf("enter the joining year ");
	scanf("%d",&joined);
	if(current-joined>=3)
	{
		salary=salary+bonus;
		printf("the salary of worker is %d",salary);
	}
	else
	{
			printf("the salary of worker is %d",salary);
	}
		
}
