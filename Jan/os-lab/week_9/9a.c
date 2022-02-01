//9  Implement the following Disk Scheduling Algorithms   
//a) FCFS

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int RQ[100], i, n, TotalHeadMoment=0, initial;
	printf("Enter the no. of Requests: ");
	scanf("%d", &n);
	printf("\nEnter the Requests sequence:\n");
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &RQ[i]);
	}
	printf("\nEnter initial and head position: ");
	scanf("%d", &initial);
	for (i = 0; i < n; ++i)
	{
		TotalHeadMoment += abs(RQ[i] - initial);
		initial = RQ[i];
	}
	printf("Total Head Moment is %d", TotalHeadMoment);
	return 0;
}

/*
OUTPUT: 
Enter the number of Request: 8 
Enter the Requests Sequence: 95 180 34 119 11 123 62 64 
Enter initial head position: 50 
Total head movement is: 644
/*

