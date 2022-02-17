// 9. Implement the following Disk Scheduling Algorithms
// b) SSTF (Shortest Seek Time First)

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int RQ[100],i,n,TotalHeadMoment=0,initial,count=0;
	printf("Enter the number of Requests:\n");
	scanf("%d",&n);
	printf("Enter the Requests sequence:\n");
	for(i=0;i<n;i++)
		scanf("%d",&RQ[i]);
	printf("Enter initial head positio:n\n");
	scanf("%d",&initial);
	// logic for sstf disk scheduling
	/* loop will execute until all processes are completed*/
	while(count!=n)
	{
		int min=1000, d, index;
		for(i=0;i<n;i++)
		{
			d = abs(RQ[i]-initial);
			if(min>d)
			{
				min=d;
				index=i;
			}
		}
		TotalHeadMoment += min;
		initial=RQ[index];
		// 1000 is for max
		// you can use any number
		RQ[index]=1000;
		count++;
	}
	printf("Total head movement is: %d",TotalHeadMoment);
	return 0;
}

/*
Output:
Enter the number of Request: 8
Enter Request Sequence: 95 180 34 119 11 123 62 64
Enter initial head Position: 50
Total head movement is: 236
*/
