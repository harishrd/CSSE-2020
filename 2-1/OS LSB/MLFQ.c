#include<stdio.h>

struct process {
	char name;
	int AT,BT,WT,TAT,RT,CT;
}Q1[10],Q2[10],Q3[10]; //Three queues

int n;

void sortByArrivalTime () {
	
	struct process temp;
	int i,j;
	for(i=0;i<n;i++) {
		for(j = i+1; j<n; j++) {
			if(Q1[i].AT > Q1[j].AT) {
				temp = Q1[i];
				Q1[i] = Q1[j];
				Q1[j] = temp;
			}
		}
	}
}


int main() {
	
	int i,j,k=0,r=0,time=0,tq1=5,tq2=8,flag=0;
	char c;
	printf("\nEnter no. of process: ");
	scanf("%d",&n);
	
	for(i=0,c='A'; i<n; i++, c++) {
		Q1[i].name = c;
		printf("\nEnter the arrival time and burst time of process %c: ", Q1[i].name);
		scanf("%d%d", &Q1[i].AT, &Q1[i].BT);
		Q1[i].RT = Q1[i].BT;  // Same burst time is remaining time for each process
		
	}
	
	sortByArrivalTime();
	
	time = Q1[0].AT;
	
//	FIRST QUEUE

	printf("\n\nProcess in first queue following RR with qt = 5");
	printf("\nProcess\t\tRT\t\tWT\t\tTAT\t\t");
	
	for(i=0;i<n;i++) {
		
		if(Q1[i].RT <= tq1) {
			
			time += Q1[i].RT; // from arrival time of first process to completion of this process
			
			Q1[i].RT = 0;
			
			Q1[i].WT = time - Q1[i].AT - Q1[i].BT; // amount of time process has been waiting in the first queue
			
			Q1[i].TAT = time - Q1[i].AT; // amount of time to execute the process
			
			printf("\n%c\t\t%d\t\t%d\t\t%d", Q1[i].name, Q1[i].BT, Q1[i].WT, Q1[i].TAT);
		}
		else {  // process moves to queue 2 with qt=8
			Q2[k].WT = time;
			time += tq1;
			Q1[k].RT -= tq1; //Q1[i or k]
			Q2[k].BT = Q1[i].RT;
			Q2[k].RT = Q2[i].BT;
			Q2[k].name = Q1[i].name;
			printf("\n%c\t\t%d\t\t%d\t\t%d", Q2[k].name, Q2[k].BT, Q2[k].WT, Q2[k].TAT);
			k = k+1;
			flag = 1;
		}
	}
	
//	SECOND QUEUE

	if(flag == 1) {
		printf("\n\nProcess in second queue following RR with qt = 8");
		printf("\nProcess\t\tRT\t\tWT\t\tTAT\t\t");
	}
	
	for(i=0; i<k; i++) {
		if(Q2[i].RT <= tq2) {
			time += Q2[i].RT; 						//from arrival time of first process + BT of this process
			Q2[i].RT = 0;
			Q2[i].WT = time - tq1 - Q2[i].BT;		// amount of time process has been waiting in the ready queue
			Q2[i].TAT = time - Q2[i].AT;	 		// amount of time to execute the process
			printf("\n%c\t\t%d\t\t%d\t\t%d", Q2[i].name, Q2[i].BT, Q2[i].WT, Q2[i].TAT);
		}
		else { //process moves to queue 3 with FCFS
			Q3[r].AT = time;
			time += tq2;
			Q2[i].RT -= tq2;
			Q3[r].BT = Q2[i].RT;	
			Q3[r].RT = Q3[r].BT; //Q2 or 3
			Q3[r].name = Q2[i].name;
			printf("\n%c\t\t%d\t\t%d\t\t%d", Q2[i].name, Q2[i].BT, Q2[i].WT, Q2[i].TAT);
			r = r+1;
			flag = 2;
		}
	}
	
//	THIRD QUEUE

	if(flag == 2) {
		printf("\n\nProcess in third queue following FCFS");
		printf("\nProcess\t\tRT\t\tWT\t\tTAT\t\t");
	}
		
	for(i=0; i<r; i++) {
//		Q3[i].WT = Q2[i].TAT;
		if(i==0) {
			Q3[i].WT = 0;
			Q3[i].CT = Q3[i].BT + time - tq1 - tq2;
		}
			
		else {
			Q3[i].WT = Q3[i-1].TAT;
			Q3[i].CT = Q3[i-1].CT + Q3[i].BT;
		}
			
			
		printf("\n%c\t\t%d\t\t%d\t\t%d", Q3[i].name, Q3[i].BT, Q3[i].WT, Q3[i].TAT);
	}
}































