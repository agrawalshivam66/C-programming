#include<stdio.h>

void first_fit()
{
	int ma[10],process_memory[10];
int p,n;
	printf("\t\t\t\t\tFirst Fit");
printf("\nEnter the number of memory blocks:- ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	  printf("Enter the allocated memory for block %d :  ",i+1);
	scanf("%d",&ma[i]);
}

printf("\n");
  printf("Enter the number of processes:- ");
 scanf("%d",&p);
 

 for(int i=0;i<p;i++)
{ printf("Enter the memory allocated for processes %d : ",i+1);
	scanf("%d",&process_memory[i]);
}
	int internal_fragmentation;
	
	printf("\t\t\t\t\tFirst Fit");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ma[j]>process_memory[i])
			{
				    ma[j]=ma[j]-process_memory[i];
				    internal_fragmentation +=ma[j];
			     printf("\nfor process %d memory is allocated and the allocate memory is- %d ",i+1,process_memory[i]);
			     ma[j]=0;
			    
			  break;
			}
			
		}
	}
	 printf("\n Internal Fragmentation- %d", internal_fragmentation );	
}

int main()
{

first_fit();
}
