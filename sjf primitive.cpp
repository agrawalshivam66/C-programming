#include<stdio.h>
typedef struct presjf
{
	int at,bt,ft,tat,wt;
}presjf;
presjf p[20],p1[20];
int main()
{
	int i,limit,nextval,m,min,n;
	float avgwt=0.0,avgtat=0.0;
	p[0].wt=p[0].tat=0;	
	printf("\nEnter the no of process: ");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		printf("Enter the arrival time for the process P%d: ",i);
		scanf("%d",&p[i].at);	
	}
	
	limit=p[1].at;
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the burst time for the process P%d: ",i);
		scanf("%d",&p[i].bt);
	}
	
	for(i=1;i<=n;i++)
	{
		limit=limit+p[i].bt;
	}
	
	for(i=1;i<=n;i++)
	{
		p1[i]=p[i];
	
	}
	nextval=p[1].at;
	m=1;
	
	do
	{
		min = 9999;
		for(i=1;p[i].at<=nextval && i<=n ;i++)
		{
			if(p[i].bt<min && p[i].bt>0)
			{
				m=i;
				min=p[i].bt;
			}
		
		}
		
		nextval++;
		p[m].bt=p[m].bt-1;
		
		if(p[m].bt==0)
		{
			p[m].ft=nextval;
			p[m].tat=p[m].ft-p[m].at;
			p[m].wt=p[m].tat-p1[m].bt;
		}
	}while(nextval<limit);
	
	
	printf("\n\n\n");
	printf("\nProcess\t Arival Time\tBurst time\tTurn Around Time\tWaiting Time\n");
	
	
	for(i=1;i<=n;i++){
		printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,p[i].at,p1[i].bt,p[i].tat,p[i].wt);
avgwt=avgwt+p[i].wt;
avgtat=avgtat+p[i].tat;
}

avgwt=avgwt/n;
avgtat=avgtat/n;
printf("\nAverage waiting time is %f",avgwt);
printf("\nAverage turn around time is %f",avgtat);
	}
