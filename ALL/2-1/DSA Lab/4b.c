// 4. b) Develop a menu driven program to implement queue operations using arrays 

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

void insert();  
void delete();  
void display();  
int front = -1, rear = -1;  
int queue[MAXSIZE];  

int main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice:");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            	insert();  
            	break;  
            case 2:  
            	delete();  
           		break;  
            case 3:  
            	display();  
            	break;  
            case 4:
            	exit(0);
            default:
            	printf("\nInvalid choice!");
		}
	}
	return 0;	
}

void insert()
{
	int item;
	printf("\nEnter the element: ");
	scanf("\n%d", &item);
	if(rear == MAXSIZE-1)
	{
		printf("\nOverflow!");
		return;
	}
	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
	}
	else
		rear ++;
	
	queue[rear] = item;
	printf("\nValue inserted");
}

void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;         
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else  
		{
			front = front + 1;
		} 
        printf("\nValue deleted ");  
    }  
}

void display()
{
	int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nPrinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
}

/*
Output:


1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:1

Enter the elemetn: 5

Value inserted
1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:1

Enter the elemetn: 13

Value inserted
1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:3

printing values .....

5

13

1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:1

Enter the elemetn: 99

Value inserted
1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:2

value deleted 
1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:3

printing values .....

13

99

1.Insert an element
2.Delete an element
3.Display the queue
4.Exit

Enter your choice:4


*/




