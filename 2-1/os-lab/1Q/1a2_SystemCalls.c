#include<stdio.h>
#include<sys/wait.h>

int main()
{
	int p1,p2,p3,p4;
	p1 = fork();
	if(p1 == -1)
	{
		printf("Error");
		return 0;
	}
	if(p1 == 0)
	{
		p2 = fork();
		if(p2 == 0)
		{
			printf("Parent is %d\n", getpid());
			printf("Child is %d\n", getpid());
		}
		p3 = fork();
		if(p3 == -1)
		{
			printf("Error");
			return 0;
		}
	}
	if(p3 == 0)
	{
		printf("Parent is %d\n", getpid());
		printf("Child is %d\n", getpid());
		p4 = fork();
		if(p4 == 0)
		{
			printf("Parent is %d\n", getpid());
			printf("Child is %d\n", getpid());
			return 0;
		}
	}
	return 0;
}
