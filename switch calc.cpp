#include<stdio.h>
int main()
{
	int s,a,b,v;
	printf("enter two numbers ");
	scanf("%d %d", &a,&b);
	printf("enter 1 for addition, 2 for substraction,3 for multiplication, 4 for division ");
	scanf("%d",&s);
	
	switch(s)
	{
		case 1:
			v=a+b;
			printf("the sum is %d",v);
			break;
			
		case 2:
			v=a-b;
			printf("the sub is %d",v);
			break;
			case 3:
				v=a*b;
			printf("the multiplication is %d, v");
			break;
			case 4:
				v=a/b;
				printf("the division is %d",v);
				break;
				default :
					printf("wrong choice");
					break;
	}
}
