#include<stdio.h>
int main()
{
    int a,l,b,sa=2,c=0;
    scanf("%d %d", &l,&b);
    a=l*b;
    while(sa<=a)
    {
        sa=sa+2;
        c++;
    }
printf("%d",c);
return(0);
}
