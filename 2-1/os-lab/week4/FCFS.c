// FCFS alogrithm

#include<stdio.h>
struct ps{
	int pno;
	int btime;
};

int main()
{
	int n,i,wait;
	float avg1, avg2;
	struct ps f[20];
	printf("\n---FCFS algorithm---\n");
	printf("\nEnter no. of processes: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the process number:");
		scanf("%d",&f[i].pno);
		printf("/nEnter the burst time: ");
		scanf("%d",&f[i].btime);	
	}
	
	printf("\nThe process details are...");
	printf("\n\nProcess\tBurst Time\tWaiting Time\tTurnaround Time");
	avg1=avg2=wait=0;

	for(i=0;i<n;i++){
		printf("\n%d\t%d\t\t", f[i].pno,f[i].btime);
		printf("%d\t\t%d\n",wait, wait+f[i].btime);
		avg1=avg1+wait; //avg waiting time
		avg2=avg2+wait+f[i].btime; //avg turnaround time
		wait=wait+f[i].btime;
	}
	
	avg1=avg1/n;
	avg2=avg2/n;
	printf("\nAverage Waiting Time is %f\n", avg1);
	printf("\nAverage Turnaround Time is %f\n", avg2);
}
