#include<stdio.h>
struct fcfs{
	int prono;
	int btime;
	int arrtime;
	int wtime;
	int tntime;
}a[50];
int main()
{
	int i,j;
	int n;
	printf("Enter the no of processes: ");
	scanf("%d",&n);
	printf("\nEnter the burst times and arrival times for the processes");
	for(i=0;i<n;i++){
		printf("\n%d burst: ",i+1);
		scanf("%d",&a[i].btime);
		printf("\n%d arrival: ",i+1);
		scanf("%d",&a[i].arrtime);
		a[i].prono = i + 1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
			if(a[j].arrtime < a[i].arrtime)
			{
				a[50] = a[i];
				a[i] = a[j];
				a[j] = a[50];
			}
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++){
			if(a[j].btime < a[i].btime)
			{
				a[50] = a[i];
				a[i] = a[j];
				a[j] = a[50];
			}
		}
	}
	a[0].wtime = 0;
	a[0].tntime = a[0].btime;
	float avgwtime = 0;
	float avgtntime = 0;
	for(i=1;i<n;i++){
		a[i].wtime=0;
		for(j = 0; j<i; j++){
			a[i].wtime = a[i].wtime + a[j].btime;
		}
		a[i].wtime = a[i].wtime - a[i].arrtime + a[0].arrtime;
		avgwtime = avgwtime + a[i].wtime;
	}
	float cpuutil = ((avgwtime - a[0].arrtime)/avgwtime)*100;
	avgwtime = avgwtime/n;
	for(i = 1; i < n; i++)
	{
		a[i].tntime =  - a[i].arrtime + a[0].arrtime;
	}
	for(i=0;i<n;i++){
		a[i].tntime = a[i].wtime + a[i].btime;
		avgtntime = avgtntime + a[i].tntime;
	}
	avgtntime = avgtntime/n;
	printf("\nProcess\tBurst Time\tArrival Time\tWaiting time\totaltimeturn around time\t\n");
	for(i = 0; i < n; i++){
		printf("P%d \t %d \t\t%d\t\t %d \t\t %d \n",a[i].prono,a[i].btime,a[i].arrtime,a[i].wtime,a[i].tntime);
	}
	printf("\n The average waiting time is %f",avgwtime);
	printf("\n The average turn around time is %f",avgtntime);
	printf("\n The CPU utilization is: %f",cpuutil);
}
