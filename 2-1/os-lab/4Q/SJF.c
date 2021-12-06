// SHORTEST JOB FIRST (SJF) algorithm

#include<stdio.h>

struct sjf {
	int pno, btime;
};

main() {
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

	//sortimg the processes in ascending order of their burst time
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(s[i].btime > s[j].btime) {
				btemp = s[i].btime;
				ptemp = s[i].pno;
				s[i].btime = btemp;
				s[i].pno = s[j].pno;
				s[j].pno = ptemp;
			}
		}
	}

	printf("\n\nThe process details..");
	printf("\nProcess number \t Burst time \t Waiting time \t Turnaround time");
	for(i=0;i<n;i++) {
		printf("\n\t %d \t\t %d", s[i].pno, s[i].btime);
		printf("\t %d \t\t %d", wait, wait+s[i].btime);
		avg1=avg1+wait;
		avg2=avg2+wait+s[i].btime;
		wait = wait+s[i].btime;
	}

	printf("\n\ngantt chart\n\n");
	printf("\n___________");
	printf("%d\t\t",a);
	for(i=0;i<n;i++) {
		a=a+s[i].btime;
		printf("%d\t\t",a);
	}

	printf("\n____________");
	wt = avg1/n;
	ta = avg2/n;
	printf("\nAverage Waiting Time is %f\n", wt);
	printf("\nAverage Turnaround Time is %f\n", ta);

}
