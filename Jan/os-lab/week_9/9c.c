/* 9.c Implement the following Disk Scheduling Algorithms
SCAN */

#include<stdio.h>
#include<stdlib.h>
int main() {
   int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move ;
   printf("Enter the number of Requests\n");
   scanf("%d",&n);
   printf("Enter the Requests sequence\n");
   for(i=0;i<n;i++)
   	scanf("%d",&RQ[i]);
   printf("Enter initial head position\n");
   scanf("%d",&initial);

   printf("Enter total disk size\n");
   scanf("%d",&size);
   printf("Enter the head movement direction for high 1 and for low 0\n");
   scanf("%d",&move);

   // logic for Scan disk scheduling
   /*logic for sorting the request array */
   
	for(i=0;i<n;i++)    //in ascending order
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

	int index;           // to differentiate high and low movement
	for(i=0;i<n;i++)     // 11 34 62 64 95 119 123 180
	{
		if(initial<RQ[i])
		{
			index=i;
			break;
		}
	}

	// if movement is towards high value
	if(move==1)
	{
		for(i=index;i<n;i++)  // right to index (including index)
		{
			TotalHeadMoment += abs(RQ[i] - initial);
			initial=RQ[i];
		}
		//  last movement for max size
		TotalHeadMoment += abs(size - RQ[i-1] - 1); //difference b/w last request to the last track(size-1)
		initial = size-1;

		for(i=index-1;i>=0;i--) //right to left
		{
			TotalHeadMoment += abs(RQ[i] - initial);
			initial=RQ[i];
		}
	}

	// if movement is towards low value
	else
	{
		for(i=index-1;i>=0;i--) // left to index (excluding index)
		{
			TotalHeadMoment += abs(RQ[i] - initial);
			initial=RQ[i];
		}
		//  last movement for min size
		TotalHeadMoment += abs(RQ[i+1]-0);
		initial =0;
		for(i=index;i<n;i++) //left to right
		{
			TotalHeadMoment += abs(RQ[i] - initial);
			initial=RQ[i];
		}
	}
	printf("Total head movement is %d",TotalHeadMoment);
	return 0;
}

/*
OUTPUT:
Enter the number of Request
8
Enter the Requests Sequence
95 180 34 119 11 123 62 64
Enter initial head position
50
3
Enter total disk size
200
Enter the head movement direction for high 1 and for low 0
1
Total head movement is 337
*/
