#include<stdio.h>
int main()
{
	int s;
	float t=0,tc=0;
	printf("enter the temperature ");
	scanf("%f",&t);
	printf("enter 1 for celcious to farenheit and 2 for farenheit to celcious ");
	scanf("%d",&s);
	switch(s)
	{
	
	case 1:
		tc=9*(t+32)/5;
		printf("the temperature in farenheit is %f",tc);
		break;
		case 2:
			tc=5*(t-32)/9;
			printf("the temperature in celcious is %f",tc);
		break;
}
}
