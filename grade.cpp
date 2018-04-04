#include<stdio.h>
int main()
{
	int s1=0,s2=0,s3=0,s4=0,avg=0,ag=0,t=400;
	printf("enter the marks in 1st subject ");
	scanf("%d",&s1);
		printf("enter the marks in 2nd subject ");
	scanf("%d",&s2);
		printf("enter the marks in 3rd subject ");
	scanf("%d",&s3);
		printf("enter the marks in 4rd subject ");
	scanf("%d",&s4);
	ag=s1+s2+s3+s4;
	avg=(s1+s2+s3+s4)/4;
	printf("\n the total marks is %d",t);
	printf("\n the agregate marks is %d \n",ag);
		printf("\n the average marks is %d \n",avg);
	if(avg>=90)
	{
		printf("A+ grade");
	}
else if(avg>=80 && avg<=90)
	{
		printf("A grade");
	}
	else if(avg>=70 && avg<=80)
	{
		printf("B+ grade");
	}
	else if(avg>=60 && avg<=70)
	{
		printf("B grade");
	}
	else if(avg>=50 && avg<=40)
	{
		printf("C grade");
	}
	else
{
	printf("F grade");
}
	
}
