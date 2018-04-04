#include <stdio.h>
#include <string.h>

int  main()
{
    int a;
	int x;
	int i;
    char text[100];
    char f;
	char l;

    scanf("%d", &a);
    for(i=0;i<a;i++)
    {
scanf("%s", &text );
  x=strlen(text);
  if(x<11)
  {
  printf("%s", &text);
  printf("\n");
  }
  else
  {
  	f=text[0];
  	l=text[x-1];
  	printf("%c%d%c",f,(x-2),l );
  	printf("\n");
  }
    }
  return 0;
}
