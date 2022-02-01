/* 9.d Implement the following Disk Scheduling Algorithms   
CSCAN */

 
// 9  Implement the following Disk Scheduling Algorithms   
// a) FCFS     b)SSTF     c) SCAN     d) CSCAN

#include<stdio.h>
#include<stdlib.h>

int FCFS(int n, int RQ[], int initial)
{
	int i, TotalHeadMovement=0;
	for (i = 0; i < n; ++i)
	{
		TotalHeadMovement += abs(RQ[i] - initial);
		initial = RQ[i];
	}
	return TotalHeadMovement;
}

int SSTF(int n, int RQ[], int initial)
{
	int i, TotalHeadMovement=0, count=0;
	while(count!=n)     
	{         
		int min=1000,d,index;         
		for(i=0;i<n;i++)        
		{           
			d=abs(RQ[i]-initial);            
			if(min>d)            
			{               
				min=d;                
				index=i;            
			}                     
		}         
		TotalHeadMovement=TotalHeadMovement+min;         
		initial=RQ[index];         
		// 1000 is for max         
		// you can use any number         
		RQ[index]=1000;         
		count++;     
	}
	return TotalHeadMovement;         
}

int SCAN(int n, int RQ[], int initial)
{
	int i, j, TotalHeadMovement=0, size, move;
	printf("Enter total disk size\n");     
	scanf("%d",&size);     
	printf("Enter the head movement direction for high 1 and for low 0\n");     
	scanf("%d",&move);

	for(i=0;i<n;i++)     
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
	// if movement is towards high value     
	if(move==1)     
	{         
		for(i=index;i<n;i++)         
		{             
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial); 
			initial=RQ[i];         
		}         
		//  last movement for max size          
		TotalHeadMovement=TotalHeadMovement+abs(size- RQ[i-1]-1);         
		initial = size-1;         
		for(i=index-1;i>=0;i--)         
		{              
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial);              
			initial=RQ[i];                      
		}     
	}     
	// if movement is towards low value     
	else     
	{         
		for(i=index-1;i>=0;i--)         
		{             
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial);             
			initial=RQ[i];         
		}         
		//  last movement for min size          
		TotalHeadMovement=TotalHeadMovement+abs(RQ[i+1]-0);         
		initial =0;         
		for(i=index;i<n;i++)         
		{              
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial);              
			initial=RQ[i];                      
		}     
	}  
	return TotalHeadMovement;            
}

int CSCAN(int n, int RQ[], int initial)
{
	int i, j, TotalHeadMovement=0, size, move;
	printf("Enter total disk size\n");     
	scanf("%d",&size);     
	printf("Enter the head movement direction for high 1 and for low 0\n");     
	scanf("%d",&move);

	for(i=0;i<n;i++)  
	{        
		for( j=0;j<n-i-1;j++)    
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
	// if movement is towards high value 
	if(move==1)   
	{    
		for(i=index;i<n;i++)    
		{          
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial); 
			initial=RQ[i];     
		}       
		//  last movement for max size     
		TotalHeadMovement=TotalHeadMovement+abs(size- RQ[i-1]-1);      
		/*movement max to min disk */   
		TotalHeadMovement=TotalHeadMovement+abs(size- 1-0);  
		initial=0;     // <---
		for( i=0;i<index;i++)    
		{            
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial);    
			initial=RQ[i];                  
		}  
	}    
	// if movement is towards low value   
	else   
	{       
		for(i=index-1;i>=0;i--)   
		{          
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial);    
			initial=RQ[i];      
		}       
		//  last movement for min size   
		TotalHeadMovement=TotalHeadMovement+abs(RQ[i+1]-0);     
		/*movement min to max disk */   
		TotalHeadMovement=TotalHeadMovement+abs(size- 1-0);    
		initial =size-1;     
		for(i=n-1;i>=index;i--)  
		{ 
			TotalHeadMovement=TotalHeadMovement+abs(RQ[i]- initial);            
			initial=RQ[i];             
		}   
	}  
	return TotalHeadMovement;     
}

int main()
{
	int ch, RQ[100], i, n, initial, TotalHeadMovement=0;
	while(1)
	{
		printf("\n1.FCFS\n2.SSTF\n3.SCAN\n4.CSCAN\n5.Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
        if (ch == 5)
            exit(0);
		printf("Enter the no. of Requests: ");
		scanf("%d", &n);

		printf("\nEnter the Requests sequence:\n");
		for (i = 0; i < n; ++i)
			scanf("%d", &RQ[i]);
		printf("\nEnter initial and head position: ");
		scanf("%d", &initial);

		switch(ch)
		{
			case 1:
				TotalHeadMovement = FCFS(n, RQ, initial);
				break; 
			case 2:
				TotalHeadMovement = SSTF(n, RQ, initial);
				break;
			case 3:
				TotalHeadMovement = SCAN(n, RQ, initial);
				break;
			case 4:
				TotalHeadMovement = CSCAN(n, RQ, initial);
				break;
			default:
				printf("\nInvalid option!");
		}
		printf("\nTotal head movement is: %d", TotalHeadMovement);
	}
	return 0;
}

/*
OUTPUT:-  
Enter the number of Request 
8
Enter the Requests Sequence 
95 180 34 119 11 123 62 64
Enter initial head position 
50
Enter total disk size 
200 
Enter the head movement direction for high 1 and for low 0 
1 
Total head movement is 382 
*/