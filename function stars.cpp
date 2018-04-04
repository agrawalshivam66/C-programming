#include<stdio.h>
int stars(int x)
{
 
		int a,i;	


	for(i=1;i<=x;i++)
	{
		printf("\n");
		for(a=1;a<=i;a++)
	
	    {
		printf("*");

		}	
	printf("\n");
}

}
int main()
{
	int y;
		printf("enter the number of stars ");
	scanf("%d",&y);
stars(y);
}


