/* 9.d Implement the following Disk Scheduling Algorithms
CSCAN */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
	printf("enter the no of requests\n");
	scanf("%d",&n);
	printf("Enter the request sequence\n");
	for(i=0;i<n;i++)
	   scanf("%d",&RQ[i]);
	printf("enter initial head position\n");
	scanf("%d",&initial);
	printf("enter total disk size\n");
	scanf("%d",&size);
	printf("enter the head movement direction for high 1 and for low 0\n");
	scanf("%d",&move);

	for(i=0;i<n;i++) //sort in A.O
	{
		for(j=0;j<n-i-1;j++)
		{
			if(RQ[j]>RQ[j+1])
			{
				int temp;
				temp=RQ[j];
				RQ[j]=RQ[j+1];
				RQ[j+1]=temp;
			}
		}
	}

	int index;
	for(i=0;i<n;i++)
	{
		if(initial<RQ[i])
		{
			index=i;
			break;
		}
	}

	if(move==1) //left to right
	{
		for(i=index;i<n;i++)
		{
			TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
			initial=RQ[i];
		}
		TotalHeadMoment=TotalHeadMoment+abs(size-RQ[i-1]-1);
		TotalHeadMoment=TotalHeadMoment+abs(size-1-0);
		initial=0; //update initial
		for(i=0;i<index;i++)
		{
			TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
			initial=RQ[i];
		}
	}
	else //right to left
	{
		for(i=index-1;i>=0;i--)
		{
			TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
			initial=RQ[i];
		}
		TotalHeadMoment=TotalHeadMoment+abs(RQ[i+1]-0);
		TotalHeadMoment=TotalHeadMoment+abs(size-1-0);
		initial=size-1; //update initial
		for(i=n-1;i>=index;i--)
		{
			TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
		}
	}
	printf("total head movement is %d",TotalHeadMoment);
	return 0;
}

/*Output:
enter the no of requests
8
Enter the request sequence
95 180 34 119 11 123 62 64
enter initial head position
50
enter total disk size
200
enter the head movement direction for high 1 and for low 0
1
total head movement is 382
--------------------------------  */
