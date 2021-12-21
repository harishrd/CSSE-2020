// PRIORITY SCHEDULING ALGORITHM

#include<stdio.h>
int main()
{
	int i,j,n,time,sum_wait=0,sum_turnaround=0;
	int smallest,at[10],bt[10],priority[10],remain;
	printf("enter the number of process:");
	scanf("%d",&n);
	remain=n;
	for(i=0;i<n;i++)
	{
		printf("enter arrivaltime,burst time and priority for process p%d:",i+1);
		scanf("%d",&at[i]);
		scanf("%d",&bt[i]);
		scanf("%d",&priority[i]);
	}
	priority[9]=11;
	printf("\n\nprocess |   burst time  |turnaround time| waiting time\n");
	for(time=0;remain!=0;time++)
	{
		smallest=9;
		for(i=0;i<n;i++)
		{
			if(at[i]<=time&&priority[i]<priority[smallest]&&bt[i]>0)
			{
				smallest=i;
			}
		}
		time+=bt[smallest];
		remain--;
		printf("p[%d]\t|\t%d\t|\t%d\t|\t%d\n",smallest+1,bt[smallest],time-at[smallest],time-at[smallest]-bt[smallest]);
		sum_wait+=time-at[smallest]-bt[smallest];
		sum_turnaround+=time-at[smallest];
		bt[smallest]=0;
	}
	printf("\n avg waiting time=%f\n",sum_wait*1.0/n);
	printf("\n avg turnaround time=%f\n",sum_turnaround*1.0/n);
	return 0;
}
/*
Output:
enter the number of process:4
enter arrivaltime,burst time and priority for process p1:0 5 1
enter arrivaltime,burst time and priority for process p2:0 4 3
enter arrivaltime,burst time and priority for process p3:0 1 2
enter arrivaltime,burst time and priority for process p4:0 6 4

process |   burst time  |turnaround time| waiting time
p[1]	|	5	|	5	|	0
p[3]	|	1	|	7	|	6
p[2]	|	4	|	12	|	8
p[4]	|	6	|	19	|	13

 avg waiting time=6.750000

 avg turnaround time=10.750000
*/
