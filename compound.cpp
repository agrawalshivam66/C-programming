#include<stdio.h>

int main()
{
float p=0,r=0,t=0,i=0,l;
printf("enter the principle amount ");
scanf("%f",&p);
printf("enter the time in years ");
scanf("%f",&t);
printf("enter the anual rate  ");
scanf("%f",&r);
for(l=0;l<=t;l++)
{
p=p+i;
i=(p*r*1)/100;
}
printf("the compount intrest is %f",i);
printf("\nthe total amount is %f",p);
}
