#include <stdio.h>
int allocation[5][5], request[5][5], work[5];
int alloc[5] = {0, 0, 0, 0, 0};
int maxres[5], running[5], safe=0,seq[5];
int count = 0, i, j, exec, r, p, k = 1;

int main()
{
    printf("\nEnter the number of processes- ");
    scanf("%d", &p);

    for (i = 0; i < p; i++) {
        running[i] = 1;
        count++;
    }

    printf("\nEnter the number of resources- ");
    scanf("%d", &r);

    for (i = 0; i < r; i++) { 
        printf("\nEnter the resource for instance %d- ", k++);
        scanf("%d", &maxres[i]);
    }

    printf("\nEnter the request table:\n");
    for (i = 0; i < p; i++) {
        for(j = 0; j < r; j++) {
        		 printf("Enter the %d th requests of process %d -- ",j+1,i);
            scanf("%d", &request[i][j]);
        }
    }

    printf("\nEnter allocation table:\n");
    for (i = 0; i < p; i++) {
        for(j = 0; j < r; j++) {
        	printf("Enter the %d th allocations of process %d -- ",j+1,i);
            scanf("%d", &allocation[i][j]);
        }
    }


    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            alloc[j] += allocation[i][j];
        }
    }


    for (i = 0; i < r; i++) {
        work[i] = maxres[i] - alloc[i];
    }    


    while (count != 0) {
        safe = 0;
        for (i = 0; i < p; i++) {
            if (running[i]) {
                exec = 1;
                for (j = 0; j < r; j++) {
                    if (request[i][j] - allocation[i][j] > work[j]) {
                        exec = 0;
                        break;
                    }
                }
                if (exec) {
                    
                    running[i] = 0;
                    count--;
                    safe = 1;
					seq[count]=i;
                    for (j = 0; j < r; j++) {
                        work[j] += allocation[i][j];
					}

                    break;
                }
            }
        }
        if (!safe) {
            printf("\nThe processes are in unsafe state.\n");
            break;
        } else {
            printf("\nThe process is in safe state");
            printf("\nSafe sequence is:");

            for (i = 0; i < r; i++) {
                printf("\t%d", work[i]);
            }

            printf("\n");
        } 

    }
    printf("\nSafe sequence is:");
          for (i = p-1; i >=0 ; i--) {
                printf("\t%d", seq[i]);
            }
}
