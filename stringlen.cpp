#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
int i,l;
char text [100];
scanf(" %s", &text );
l=strlen(text);
for(i=0;i<l;i++)
{
if((text[i]=='a') || (text[i]=='A') || (text[i]=='e') || (text[i]=='E') || (text[i]=='i') || (text[i]=='I') || (text[i]=='o') || (text[i]=='O') || (text[i]=='u') || (text[i]=='U') || (text[i]=='y') || (text[i]=='Y'))
{
}
else
{
	printf(".");
char c=tolower(text[i]);
printf("%c", c);

}
}
return (0);
}

