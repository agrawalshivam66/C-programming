#include<stdio.h>

int main()
{
int p,r,t,i,s;
printf("enter the principle amount in rupees ");
scanf("%d",&p);
printf("enter the rate of intrest per annum ");
scanf("%d",&r);
printf("enter the time in years ");
scanf("%d",&t);
i=(p*r*t)/100;
s=p+i;
printf("the intrest is %d \n",i);
printf("the amount is %d \n",s);
}
