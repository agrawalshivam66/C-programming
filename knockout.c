#include<stdio.h>
int main()
{
int k,n,i,w=0,l;
int a[100];
scanf("%d %d", &n, &k);
for(i=1;i<=n;i++)
{
	scanf(" %d",&a[i]);
}
for(i=1;i<=n;i++)
{
	if (a[i]>0)
	{
	if(a[i]>=a[k])
	{
	w++;
}
}
}
printf("%d",w);
}
