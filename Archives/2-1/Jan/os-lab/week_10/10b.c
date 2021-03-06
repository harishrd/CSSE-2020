// 10 Implement the following file allocation strategies:
// b) LINKED ALLOCATION

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int f[50], p, i, st, len, j, c, k, a, x;
	for(i=0;i<50;i++)
		f[i]=0;
	printf("Enter how many blocks already allocated:\n");
	scanf("%d", &p);
	printf("Enter blocks already allocated: \n");
	for(i=0;i<p;i++)
	{
		scanf("%d", &a);
		f[a]=1;
	}
	x:
	printf("Enter index of starting block and length:\n");
	scanf("%d%d",&st, &len);
	k=len;
	if (f[st]==0)
	{
		for(j=st;j<(st+k);j++)
		{
			if (f[j]==0)
			{
				f[j]=1;
				printf("%d----->%d\n",j,f[j]);
			}
			else
			{
				printf("%d Block is already allocated\n", j);
				k++; //compensate the already allocated block
			}
		}
	}
	else
		printf("%d starting block is already allocated\n", st);
	printf("Do you want to enter more files(Yes:1/No:0)\n");
	scanf("%d", &c);
	if(c==1)
		goto x;
	else
		exit(0);
	getch(); // why?
}

/* Output:

Enter how many blocks already allocated:
3
Enter blocks already allocated:
1
3
5
Enter index of starting block and length:
2
2
2----->1
3 Block is already allocated
4----->1
Do you want to enter more file(Yes:1/No:0)
0

*/
