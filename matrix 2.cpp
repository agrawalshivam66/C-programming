#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
int cu=0,i=0,j=1,k=0,x;
system("COLOR 2");
while(cu<50000000000000)
{
	j=rand() %9 + 0;
	k=rand() %10 + 0;
	i=rand() %50 + 0;
	for(x=0;x<k;x++)
    {
        printf("   ");
    }
	char randomletter = 'A' + (rand() % 26);
	char randomletter2 = 'a' + (rand() % 26);
	printf("    %d    ",j);
	printf("    %c    ",randomletter);
	printf("    %d    ",i);
	printf("    %c    ",randomletter2);

cu++;
Sleep(20);
}
return 0;
}

