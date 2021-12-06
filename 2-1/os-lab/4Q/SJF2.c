// SHORTEST JOB FIRST (SJF) algorithm

#include<stdio.h>

struct sjf {
	int pno, btime;
};

main()
{
	int n, i, j, wait, ptemp, btemp, a, pno, btime;
	float avg1, avg2, wt, ta;
	struct sjf s[10];
	printf("\n\n SJF algorithm \n\n");
	printf("************");
	printf("\nEnter the no. of processes: ");
	scanf("%d", &n);
	btemp=ptemp=wait=avg1=avg2=a=0;
	for(i=0;i<n;i++) {
		printf("\nEnter the process no: ");
		scanf("%d", &s[i].pno);
		printf("\nEnter the burst time: ");
		scanf("%d", &s[i].btime);
	}
	for(i=0;i<n;i++) {   		 				// [2,1,3]  b.time
		for(j=i+1;j<n;j++) {	 				// [1,2,3]  p.no    		btemp =2
			if(s[i].btime > s[j].btime) {		// [2,1,3] new  p.no		ptemp = 1
				btemp = s[i].btime;				// [2,1,3] new b.time wrt p.no
				ptemp = s[i].pno;
				s[i].btime = btemp;
				s[i].pno = s[j].pno;
				s[j].pno = ptemp;
			}
		}
	}
	
	printf("\n\nThe process details..\n");
	printf("\nProcess number \t Burst time \t Waiting time \t Turnaround time");
	for(i=0;i<n;i++) {
		printf("\n%d \t\t %d\t", s[i].pno, s[i].btime);
		printf("\t %d \t\t %d", wait, wait+s[i].btime);
		avg1=avg1+wait;
		avg2=avg2+wait+s[i].btime;
		wait = wait+s[i].btime;
	}
	
	printf("\n\n\ngantt chart\n");
	printf("\n________________________________________________________________\n\n");
	printf("%d\t\t",a);
	for(i=0;i<n;i++) {
		a=a+s[i].btime;
		printf("%d\t\t",a);
	}
	
	printf("\n________________________________________________________________\n");
	wt = avg1/n;
	ta = avg2/n;
	printf("\nAverage Waiting Time is %f\n", wt);
	printf("\nAverage Turnaround Time is %f\n", ta);
	
}

/*
Output:


 SJF algorithm 

************
Enter the no. of processes: 3

Enter the process no: 1

Enter the burst time: 2

Enter the process no: 2

Enter the burst time: 3

Enter the process no: 3

Enter the burst time: 3


The process details..

Process number 	 Burst time 	 Waiting time 	 Turnaround time
1 		 2		 0 		 2
2 		 3		 2 		 5
3 		 3		 5 		 8


gantt chart

________________________________________________________________

0		2		5		8		
________________________________________________________________

Average Waiting Time is 2.333333

Average Turnaround Time is 5.000000

/*
