#include<stdio.h>

int main()
{
float p=0,r=0,t=0,i=0;
printf("enter the principle amount ");
scanf("%f",&p);
printf("enter the time in years ");
scanf("%f",&t);
printf("enter the anual rate  ");
scanf("%f",&r);
i=(p*r*t)/100;
printf("the simple intrest is %f",i);

}
