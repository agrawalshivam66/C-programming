#include<stdio.h>
int main()
{
	char s;
	printf("press your grade A, B, C, D ");
	scanf("%c",&s);
	switch(s)
	{
		case 'A' :
		printf("very good");
		break;
		case  'B':
		printf("good");
		break;
		case 'C' :
		printf("try to improve");
		break;
		case 'D' :
		printf("bad");
		break;
		default:
			printf("wrong selection");
			break;
	}
}
