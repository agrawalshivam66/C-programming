#include<stdio.h>
int main()
{
	int i,j,n,temp,temp1,total_turnaround,waiting_time=0;
	int waiting=0;
	int turnaround=0;
	printf("enter the number of processes ");
	scanf("%d",&n);
	
	int process[n];
	int burst_time[n];
	int priority[n];
	int temp2;
	int turng;
	for(i=0;i<n;i++)
	{
process[i]=i+1;
	printf("\nEnter burst time of %d process ",i+1);
	scanf("%d",&burst_time[i]);
	printf("Enter the priority of %d process ",i+1);
	scanf("%d",&priority[i]);
     }
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(priority[i]<priority[j])
		{
			temp=burst_time[i];
			burst_time[i]=	burst_time[j];
			burst_time[j]=temp;
			
			temp2=priority[i];
			priority[i]=priority[j];
		    priority[j]=temp2;
			
			temp1=process[i];
		    process[i]=process[j];
			process[j]=temp1;
		}
	}
}
	printf("   Process    priority    Burst Time    WaitTime   Turn Around Time\n");
	for(int i=0;i<n;i++)
	{
		turnaround=turnaround+burst_time[i];
      total_turnaround=turnaround+total_turnaround;
		printf("      %d          %d           %d            %d               %d        \n",process[i],priority[i],burst_time[i],waiting,turnaround);
	
		
		waiting_time=waiting+waiting_time;
    	waiting=waiting+burst_time[i];
    	
	}
    printf("\n avg waiting time- %d",(waiting_time/n));
    printf("\n avg turnaround time- %d",(total_turnaround/n));
}
    
   
