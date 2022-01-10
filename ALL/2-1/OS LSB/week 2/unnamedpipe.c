#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
	int fd[2], set=0;
	char buffer[] = "Marvellous infoSystems";
	char readBuff[BUFSIZE];
	pid_t Childpid;
	pipe(fd);
	Childpid = fork();
	if(Childpid == 0)
	{
		close(fd[0]);
		printf("Child initiates communication by writing the data at output side of the pipe \n");
		else
		{
			close(fd[1]);
			set = read(fd[0], readBuff, sizeof(readBuff));
			printf("The data read by Parent Process is: %s\n", raedBuff);
		}
	}
	return 0;
}
