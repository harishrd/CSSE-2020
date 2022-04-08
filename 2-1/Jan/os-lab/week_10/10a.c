// 10 Implement the following file allocation strategies:
// a) CONTIGUOUS ALLOCATION

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int f[50], i, st, len, j, c, k, count=0;
	for(i=0;i<50;i++)
		f[i]=0;
	printf("Files Allocated are:\n");
	x:
	count=0;
	printf("Enter starting block and length of files:\n");
	scanf("%d%d", &st, &len);
	for(k=st; k<=(st+len-1); k++) //starting block to st+len-1
	{
		if(f[k]==0)
			count++;
	}
	if (len == count)
	{
		for(j=st; j<=(st+len-1); j++)
		{
			if(f[j] == 0)
			{
				f[j] = 1;
				printf("%d\t%d\n", j, f[j]);
			}
		}
		if(j!=(st+len-1))
			printf("The file is allocated to the disk\n");
	}
	else
		printf("The file is not allocated\n");
	printf("Do you want to enter more files(Yes:1/No:0)\n");
	scanf("%d", &c);
	if(c == 1)
		goto x;
	else
		exit(0);
	getch(); //why??
	return 0;
}

/*Output:

Files allocated are:
Enter starting block and length of files:
3 4
3	1
4	1
5	1
6	1
The file is allocated to disk
Do you want to enter more files(Yes:1/No:0)
0

*/
