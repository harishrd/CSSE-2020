#include<stdio.h>
main()
{
	int bt[10],wt[10],tat[10],t[10],n,tq,i;
	int count=0,swt=0,stat=0,temp,sq;
	float awt,atat;
	printf("\n Enter the no of process");
	scanf("%d",&n);
	printf("\n Enter the brust time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		t[i]=i;
	}
	printf("\n Enter the time quantum");
	scanf("%d",&tq);
//	while(1)
	//{
		for(i=0;i<n;i++)
		{
			temp=tq;
			if(t[i]==0)
			{
				count ++;
				continue;
			}
			if(t[i]>tq)
			{
			t[i]=t[i]-tq;
		    }
			else
			if(t[i]>=0)
			{
				temp=t[i];
				t[i]=0;
			}
			sq=tq=temp;
			tat[i]=sq;
		}
		if(n<=count)
		//break;
	//}
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
		swt=swt+wt[i];
		stat=stat+tat[i];
	}
	awt=(float)swt/n;
	atat=(float)stat/n;
	printf("\n The process details");
	printf("\n\n Process number \t Brusttime \t Waitingtime \t Turnaroundtime");
	for(i=0;i<n;i++)
	{
		printf("\n %d \t\t %d \t\t %d",t[i],bt[i],wt[i],tat[i]);
	}
	printf("\n Average waiting time is %f",awt);
	printf("\n Average turnaround time is %f",atat);
}
