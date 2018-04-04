#include <stdio.h>
#include <stdlib.h>

int  main()
{
    unsigned long long  a,b,c,res1,res2,res;
   scanf ("%lld %lld %lld", &a,&b,&c);

   res1=a/c;
    if(a%c >0) res1++;
   res2=b/c;
   if(b%c > 0) res2++;
   res=res1*res2;

   printf("%lld",res);
   return 0;
}
