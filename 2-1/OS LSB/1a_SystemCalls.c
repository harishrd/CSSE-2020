#include<stdio.h>
#include<sys/wait.h>

int main() {
	int p1,p2;
	p1 = fork();
	if(p1 == -1) {
		printf("Error");
		return 0;
	}
	else
	{
		printf("\Parent is %d\n", getpid());
		printf("Child is %d\n", getpid());
	}
	p2 = fork();
	printf("Parent is %d\n", getpid());
	printf("Child is %d\n", getpid());
	
}
 
