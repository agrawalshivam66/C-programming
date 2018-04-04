#include<stdio.h>
int main()
{
int a=0;
int c=0;
int i;
printf("enter the number  ");
scanf("%d",&a);
for(i=1;i<=(a/2);i++)
{
if(a%i==0)
{
	c++;
}
}
if((c<2) && (a!=1))
{
	printf("the number you entered is prime ");

}
else if (a==1)
{
	printf("the number you entered is neither prime nor composite");
}
else if (a==0)
{
	printf("the number you entered is neither prime nor composite");
}
else
{
	printf("the number you entered is composite");
}
}

