#include<stdio.h>

	int bursttime[10];
	int remtime[10];
	int comptime[10];
	int waittime[10];

int main()
{
	int n,i;
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	int totaltime = 0;
	for(i = 0; i < n; i++)
	{
		printf("\nEnter the bursttime time for process %d: ",(i+1));
		scanf("%d",&bursttime[i]);
		remtime[i] = bursttime[i];
		totaltime =totaltime + bursttime[i];
	}
	printf("\n%d",totaltime);
	printf("\nEnter the time quantum: ");
	int tq;
	scanf("%d",&tq);
	int timecounter = 0;
	while(timecounter < totaltime)
	{

		for(i = 0; i < n;)
		{
			if(remtime[i] > tq)
			{
				
				remtime[i] =remtime[i]- tq;
				timecounter = timecounter + tq;
			i++;
			}
			if(remtime[i] == tq)
			{
				remtime[i] = 0;
				timecounter =timecounter + tq;
				comptime[i] = timecounter;
			i++;
			}
			if(remtime[i] < tq && remtime[i] > 0)
			{
				timecounter =timecounter + remtime[i];
				remtime[i] = 0;	
				comptime[i] = timecounter;
			i++;
			}
		if(remtime[i]==0)
		{
			i++;
		}
	
		}
	}
		printf("\n%d",timecounter);
	float avgwaittime =0;
	printf("\nProcess\tburst time Time\tTurn around Time\t\tWaiting Time");
	for(i = 0; i < n; i++)
	{
		waittime[i] = comptime[i] - bursttime[i];
		printf("\nP%d\t%d\t\t\t%d\t\t\t%d",(i+1),bursttime[i],comptime[i],waittime[i]);
		avgwaittime =avgwaittime+ waittime[i];
	}
	avgwaittime = avgwaittime/n;
	printf("\nThe average waiting time is %f",avgwaittime);
	
}
