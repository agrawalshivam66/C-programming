#include<stdio.h>
#include<stdlib.h>
//Creating three linked lists for different jobs
struct  fcfs_node{
	int pro_number;
	int priority;
	int burst_time;
	int wait_time;
	struct fcfs_node *next;
}*startf,*qf,*tf,*rearf,*frontf;

struct priority_node{
	int pro_number;
	int priority;
	int burst_time;
	int wait_time;
	struct priority_node *next;
}*start_p,*temp,*t,*q_p,*rear_p,*front_p;

struct sjf_node{
	int pro_number;
	int priority;
	int burst_time;
	int wait_time;
	struct sjf_node *next;
}*starts,*qs,*ts,*rears,*fronts;


void push_priority(int,int,int);
void push_fcfs(int,int,int);
void push_sjf(int,int,int);
int display_list();
void display_priority();
void display_fcfs();
void display_sjf();
int turn_around_time=0,	waiting_time=0;


int main()
{
	int choice,pnumber,burst_time,priority,display;
	        while(choice!=-1)
	        {
	        
	          	    printf("enter your choice \n 1. press 1 for push operation \n 2. press 2 for display \n 3. press -1 to exit the loop \nEnter Your choice- ");
	                scanf("%d",&choice);
	                printf("\n");
	                switch(choice)
	             {
                   	case 1:printf("Enter the process number:- ");
							scanf("%d",&pnumber);
							printf("Enter the burst time of process:- ");
							scanf("%d",&burst_time);
							printf("Enter the priority of process:- ");
							scanf("%d",&priority);
							printf("\n");
					   push_priority(pnumber,burst_time,priority);	
					   push_sjf(pnumber,burst_time,priority);
					   push_fcfs(pnumber,burst_time,priority);
                   	break;
                    case 2:  display= display_list();
                   	break;
                   	case -1: choice=-1;
                   	break;
	                default: printf("you have entered the wrong choice");
                 	break;
					}//end of switch
	             }//end of While
	         }//End of main
	         
	         

//push for PRIORITY linkedlist
void push_priority(int pnumber, int burst_time, int priority)
{ 

	temp = (struct priority_node*)malloc(sizeof(struct priority_node)); //allocating new memory 

temp->pro_number=pnumber;
temp->burst_time=burst_time;
temp->priority=priority;


if( front_p == NULL || priority < front_p->priority )
{
temp->next = front_p;
front_p = temp;
}
else
{
q_p = front_p;
while( q_p->next != NULL && q_p->next->priority <= priority ) 
q_p=q_p->next;
temp->next = q_p->next;
q_p->next = temp;
}


q_p=front_p;
waiting_time=0;
while(q_p->next!=NULL){
waiting_time+=q_p->burst_time;	
q_p=q_p->next;
q_p->wait_time=waiting_time;
}

}



//push for SJF linkedlist
void push_sjf(int pnumber, int burst_time, int priority)
{ 
ts=(struct sjf_node*)malloc(sizeof(struct sjf_node));
ts->pro_number=pnumber;
ts->burst_time=burst_time;
ts->priority=priority;

if(starts==NULL)
{
	ts->next=NULL;
	starts=ts;
	
}

else
{   qs=starts;
   if(qs->burst_time>ts->burst_time)          // if the burst time of the new process low then the process which is present in start
   {
   	ts->next=qs;
   	starts=ts;
   }
   
   else{
   qs=starts;
   while(qs->next!=NULL && (qs->next)->burst_time <= ts->burst_time)      
   {
   	qs=qs->next;
   }
   ts->next=qs->next;           // q->next value is assigned to the t->next and then q->next will point towards t
   qs->next=ts;
 
}
}
qs=starts;
waiting_time=0;
while(qs->next!=NULL){
waiting_time+=qs->burst_time;	
qs=qs->next;
qs->wait_time=waiting_time;
}

}




//push for FCFS linkedlist
void push_fcfs(int pnumber, int burst_time, int priority)
{
tf=(struct fcfs_node*)malloc(sizeof(struct fcfs_node));
tf->pro_number=pnumber;
tf->burst_time=burst_time;
tf->priority=priority;

if(frontf==NULL)
{
    frontf=rearf=tf;   
   	frontf->next=rearf->next=tf->next=NULL;	
}
else
{
	rearf->next=tf;
	rearf=tf;
	rearf->next=NULL;
}
qf=frontf;
waiting_time=0;
while(qf->next!=NULL){
waiting_time+=qf->burst_time;	
qf=qf->next;
}
qf->wait_time=waiting_time;
}


//Display functions
int display_list(){
	int choice;
 
	    while(choice!=-1)
	        {
	        
printf("enter your choice \n 1. press 1 for Priority operation \n 2. press 2 for SJF \n 3. press 3 for FCFS \n 4. press 4 to go back to push operations \n 5. press -1 to end the loop  \nEnter Your choice- ");
scanf("%d",&choice);
printf("\n");
	                switch(choice)
	             {
                   	case 1:display_priority();
                   	break;
                    case 2:display_sjf();
                   	break;
                   	case 3:display_fcfs();
                   	break;
                   	case 4:return 0;
                   	break;
                   	case -1: choice=-1;
                   	break;
	                default: printf("you have entered the wrong choice");
                 	break;
					}//end of switch
	             }//end of While
				 }//end of function
	
	
void display_priority(){
	printf("\n");
	q_p=front_p;
		printf("\t\t\t\t\t\t Priority Queue");
	if(q_p==NULL)
{
	printf("please first enter the values");
}
while(q_p!=NULL)
	{
		printf("\nprocess no:- %d  \tPriority of process:- %d \tburst time of process:- %d \twaiting time of process:- %d",q_p->pro_number,q_p->priority,q_p->burst_time,q_p->wait_time);
		q_p=q_p->next;
	}
printf("\n");
printf("\n");
}
	
void display_fcfs(){
	printf("\n");
		printf("\t\t\t\t\t\t First Come First Serve");
	qf=frontf;
	if(qf==NULL)
{
	printf("please first enter the values");
}
while(qf!=NULL)
	{
	printf("\nprocess no:- %d  \tPriority of process:- %d \tburst time of process:- %d \twaiting time of process:- %d",qf->pro_number,qf->priority,qf->burst_time,qf->wait_time);
		qf=qf->next;
	}
printf("\n");
printf("\n");
}


void display_sjf(){
	printf("\n");
		printf("\t\t\t\t\t\t Shortest Job First");
	qs=starts;
	if(qs==NULL)
{
	printf("please first enter the values");
}
while(qs!=NULL)
	{
	printf("\nprocess no:- %d  \tPriority of process:- %d \tburst time of process:- %d \twaiting time of process:- %d",qs->pro_number,qs->priority,qs->burst_time,qs->wait_time);
		qs=qs->next;
	}
printf("\n");
printf("\n");

}	
	
