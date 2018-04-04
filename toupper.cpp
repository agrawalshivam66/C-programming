#include<stdio.h>
int main()
{
	char c=' ';
	int a=0,b=0;
	printf("enter the character ");
	scanf("%c",&a);
	if((a>=65)&&(a<=91))
	{
	b=a+32;
}
else if((a>=97)&&(a<=122))
{
	b=a-32;
}
	printf("%c",b);
	
}
