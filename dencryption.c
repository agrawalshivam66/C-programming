#include<stdio.h>
#include<string.h>
int main()
{
	char ch,text[1000];
	int i=0,l=0;
	printf("enter the encrypted text ");
 while(ch != '\n')
    {
        ch = getchar();
        text[i] = ch;
        i++;
    }
printf("\n");
for(l=0;l<i;l++)
{
    if (text[l]=='t')
    {
        printf("a");
    }
    else if (text[l]=='x')
    {
        printf("b");
    }
    else if(text[l]=='s')
    {
        printf("c");
    }
      else if(text[l]=='r')
    {
        printf("d");
    }
    else if(text[l]=='q')
    {
        printf("e");
    }else if(text[l]=='y')
    {
        printf("f");
    }else if(text[l]=='m')
    {
        printf("g");
    }else if(text[l]=='i')
    {
        printf("h");
    }else if(text[l]=='n')
    {
        printf("i");
    }else if(text[l]=='k')
    {
        printf("j");
    }
    else if(text[l]=='o')
    {
        printf("k");
    }
    else if(text[l]=='u')
    {
        printf("l");
    }
    else if(text[l]=='a')
    {
        printf("m");
    }
    else if(text[l]=='c')
    {
        printf("n");
    }else if(text[l]=='w')
    {
        printf("o");
    }else if(text[l]=='e')
    {
        printf("p");
    }else if(text[l]=='z')
    {
        printf("q");
    }else if(text[l]=='d')
    {
        printf("r");
    }else if(text[l]=='g')
    {
        printf("s");
    }else if(text[l]=='b')
    {
        printf("t");
    }else if(text[l]=='p')
    {
        printf("u");
    }else if(text[l]=='j')
    {
        printf("v");
    }else if(text[l]=='v')
    {
        printf("w");
    }else if(text[l]=='h')
    {
        printf("x");
    }else if(text[l]=='l')
    {
        printf("y");
    }else if(text[l]=='f')
    {
        printf("z");
    }else if(text[l]=='.')
    {
        printf(".");
    }else if(text[l]==',')
    {
        printf(",");
    }
    else if(text[l]==' ')
    {
        printf(" ");
    }
    }
}


