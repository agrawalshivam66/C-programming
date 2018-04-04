#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int x1,y1,x2,y2;
float d;
printf("enter the value of x A ");
scanf("%d", &x1);
printf("enter the value y of A ");
scanf("%d",&y1);
printf("enter the value of x B ");
scanf("%d", &x2);
printf("enter the value of y B ");
scanf("%d",&y2);
d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
printf("the distance is %f",d);
}
