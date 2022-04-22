//PRODUCER CONSUMER PROBLEM

#include <stdio.h>
#include <stdlib.h>
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
		printf("\nEnter your choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				if((mutex==1)&&(empty!=0))
					producer();
				else
					printf("\nBuffer is full!");
				break;
			case 2:
				if((mutex==1) && (full!=0))
					consumer();
				else
					printf("\nBuffer is empty!");
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
	empty = signal(empty);
	full=wait(full);
	printf("\nConsumer consumes item %d",x);
	x--;
	mutex=signal(mutex);
}

/*
Output:

1.Producer
2.Consumer
3.Exit
Enter your choice: 2

Buffer is empty!
Enter your choice: 1

Producer producer item 1
Enter your choice: 1

Producer producer item 2
Enter your choice: 1

Producer producer item 3
Enter your choice: 1

Buffer is full!
Enter your choice: 2

Consumer consumes item 3
Enter your choice: 2

Consumer consumes item 2
Enter your choice: 2

Consumer consumes item 1
Enter your choice: 2

Buffer is empty!
Enter your choice: 2
/*
