//PRODUCER CONSUMER PROBLEM

#include <stdio.h>
int mutex=1, full=0, empty=3,x=0;
int main()
{
	int n;
	int wait(int);
	int signal(int);
	void producer();
	void consumer();
	printf("\n1.Producer\n2.Consumer\n3.Exit");
	while(1)
	{
		printf("Enter your choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				if((mutex==1)&&(empty!=0))
					producer();
				else
					printf("Buffer is full!");
				break;
			case 2:
				if((mutex==1) && (full!=0))
					consumer();
				else
					printf("Buffer is empty!");
				break;
			case 3:
				exit(0);
				break;
		}
	}		
}

int wait(int s)
{
	return(--s);
}
int signal(int s)
{
	return(++s);
}
void producer()
{
	mutex=wait(mutex);  //short for mutual ex.. used for process synchronisation
	full=signal(full);
	empty = wait(empty);
	x++;
	printf("\nProducer producer item %d",x);
	mutex=signal(mutex);
}
void consumer()
{
	mutex=wait(mutex);
	full=signal(full);
	empty = wait(empty);
	printf("\nConsumer consumes item %d",x);
	x--;
	mutex=signal(mutex);
}





