#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	int fd;
	char * myfifo = "/tmp/myfifo";
	mkfifo(myfifo, 0666);
	char arr1[80], arr2[80];
	
	while(1)
	{
		fd = open(myfifo, O_WRONLY);
		fgets(arr2, 80, stdin);
		write(fd, arr2, strlen(arr2)+1);
		close(fd);

		fd = open(myfifo, O_RDONLY);
		read(fd, arr1, sizeof(arr1));
		printf("User 2: %s", arr1);
		close(fd);
	}
	return 0;
}

/*
Output:

gcc namedpipe1.c
./a.out

hey
User2: hi
how you doin
User2: great
*/

