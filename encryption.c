#include<stdio.h>
#include<string.h>
int main()
{
	char ch,text[1000];
	int i=0,l=0;
	printf("enter the text ");
 while(ch != '\n')    // terminates if user hit enter
    {
        ch = getchar();
        text[i] = ch;
        i++;
    }
printf("the text entered is %s",text);
printf("the length of text is %d",i);
printf("\n");
for(l=0;l<i;l++)
{
    if((text[l]=='A') || (text[l]=='a'))
    {
        printf("t");
    }
    else if ((text[l]=='B') || (text[l]=='b'))
    {
        printf("x");
    }
    else if((text[l]=='C') || (text[l]=='c'))
    {
        printf("s");
    }
      else if((text[l]=='d') || (text[l]=='D'))
    {
        printf("r");
    }
    else if((text[l]=='e') || (text[l]=='E'))
    {
        printf("q");
    }else if((text[l]=='f') || (text[l]=='F'))
    {
        printf("y");
    }else if((text[l]=='g') || (text[l]=='G'))
    {
        printf("m");
    }else if((text[l]=='h') || (text[l]=='H'))
    {
        printf("i");
    }else if((text[l]=='i') || (text[l]=='I'))
    {
        printf("n");
    }else if((text[l]=='j') || (text[l]=='J'))
    {
        printf("k");
    }else if((text[l]=='k') || (text[l]=='K'))
    {
        printf("o");
    }
    else if((text[l]=='l') || (text[l]=='L'))
    {
        printf("u");
    }
    else if((text[l]=='m') || (text[l]=='M'))
    {
        printf("a");
    }else if((text[l]=='n') || (text[l]=='N'))
    {
        printf("c");
    }else if((text[l]=='o') || (text[l]=='O'))
    {
        printf("w");
    }else if((text[l]=='p') || (text[l]=='P'))
    {
        printf("e");
    }else if((text[l]=='q') || (text[l]=='Q'))
    {
        printf("z");
    }else if((text[l]=='r') || (text[l]=='R'))
    {
        printf("d");
    }else if((text[l]=='s') || (text[l]=='S'))
    {
        printf("g");
    }else if((text[l]=='t') || (text[l]=='T'))
    {
        printf("b");
    }else if((text[l]=='u') || (text[l]=='U'))
    {
        printf("p");
    }else if((text[l]=='v') || (text[l]=='V'))
    {
        printf("j");
    }else if((text[l]=='W') || (text[l]=='w'))
    {
        printf("v");
    }else if((text[l]=='x') || (text[l]=='X'))
    {
        printf("h");
    }else if((text[l]=='y') || (text[l]=='Y'))
    {
        printf("l");
    }else if((text[l]=='z') || (text[l]=='Z'))
    {
        printf("f");
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

