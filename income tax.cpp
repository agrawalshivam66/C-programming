#include<stdio.h>
int main()
{
	int income=0,tax=0;
	printf("enter the income amount ");
	scanf("%d",&income);
	if(income<=150000)
	{
		tax=0;
		printf("\n The income is %d and the Tax amount is %d ",income,tax);
		
	}
else if(income>150000 && income<=300000)
	{
		tax=(income*10)/100;
		printf("\n The income is %d and the Tax amount is %d ",income,tax);
	}
	else if(income>300000 && income<=500000)
	{
		tax=(income*20)/100;
		printf("\n The income is %d and the Tax amount is %d ",income,tax);
	}
	else 
	{
		tax=(income*30)/100;
		printf("\n The income is %d and the Tax amount is %d ",income,tax);
	}
}
