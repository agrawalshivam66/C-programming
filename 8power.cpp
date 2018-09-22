#include<stdio.h>
/* Function to calculate x raised to the power y in O(logn)*/
int power(int x, int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}


int main(void)
{
	int a,b;
	printf("Enter the base  ");
	scanf("%d",&a);
	
 
   	printf("enter the power ");
   	scanf("%d",&b);
   	
int results= power(a,b);
printf("the result is %d",results);

}
