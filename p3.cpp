#include <stdio.h>
#include <string.h>

int  main()
{
    int a;
	int x;
    char text[100];
    char f;
	char l;
  
    scanf("%d", &a);
scanf("  %s", &text );
  x=strlen(text);
  if(x<=a)
  {
  printf(" %s", &text);
  }
  else
  {
  	f=text[0];
  	l=text[x-1];
  	printf("%c%d%c",f,(x-2),l );
  }
  return 0;
}
