#include<stdio.h>

int main()
{
int s,h,m;
printf("enter the time in seconds ");
scanf("%d",&s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf("%d:%d:%d:",h,m,s);
}
