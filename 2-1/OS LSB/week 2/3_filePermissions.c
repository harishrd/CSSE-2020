#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int age, char *argv) //**
{
	int result;
	char *filename = (char *)malloc(512);
	if(argv < 2)
	{
		strcpy(filename, "/user/bin/adb");
	}
	else
	{
		strcpy(filename, argv[1]);
	}
	result = access(filename, R_OK);
	
	if(result == 0)
	{
		printf("%s is readable\n", filename);
	}
	else
	{
		printf("%s is not readable\n", filename);
	}
	result = access(filename, W_OK);
	
	if(result == 0)]
	{
		printf("%s is writable\n", filename);
	}
	else
	{
		printf("%s is not writable\n", filename);
	}
	result = access(filename, W_OK);
	
	if(result == 0)]
	{
		printf("%s is executable\n", filename);
	}
	else
	{
		printf("%s is not executable\n", filename);
	}
	
	free(filename);
	return 0;
}
