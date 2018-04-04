#include<stdio.h>
int main()
{
	int e1=0,e2=0,s=0,a1=0,a2=0,a3=0,r=0;
	printf("enter the marks in exam1 ");
	scanf("%d",&e1);
printf("enter the marks in exam2 ");
	scanf("%d",&e2);
printf("enter the marks in sports ");
	scanf("%d",&s);
	printf("enter the marks in activity1 ");
	scanf("%d",&a1);
		printf("enter the marks in activity2 ");
	scanf("%d",&a2);
		printf("enter the marks in activity3 ");
	scanf("%d",&a3);
	r=((e1+e2)/2)*50/100+s*20/100+((a1+a2+a3)/3)*30/100;

	printf("the result of student is %d",r);
}

