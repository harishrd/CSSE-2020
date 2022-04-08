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
		printf("Parent is %d\n", getpid());
		printf("Child is %d\n", getpid());
	}
	p2 = fork();
	printf("Parent is %d\n", getpid());
	printf("Child is %d\n", getpid());
	
}

/*
OUTPUT:
Parent is 6185
Child is 6185
Parent is 6185
Child is 6185
Parent is 6187
Child is 6187
Parent is 6186
Child is 6186
Parent is 6186
Child is 6186
Parent is 6188
Child is 6188
*/
 
