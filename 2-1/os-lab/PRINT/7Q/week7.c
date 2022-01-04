// FIRST FIT, BEST FIT, WORST FIT ALGORITHMS

#include <stdio.h>

int main()
{
	int n,fit,mem[10],y[10],z[10],a,d; //y[]-best fit(a)   z[]-worst fit(d)
	int j=1,m,i;

	printf("\nEnter the no. of memory blocks: ");
	scanf("%d",&n);
	printf("\nEnter the memory size of the blocks: ");
	for(i=0;i<n;i++)
		scanf("%d",&mem[i]);
	printf("\nEnter the size of the fit in memory: ");
	scanf("%d",&fit);
	for(i=0;i<n;i++)
	{
		if(fit <= mem[i])
		{
			printf("\nThe first fit is: %d\n",mem[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(fit <= mem[i])
		{
			y[j] = mem[i];
			z[j] = mem[i];
			j++;
		}

		m = j-1;
		a = y[j];
		j =1;

		for(j=2;j<=m;j++) //best fit
		{
			if(a > y[j])
			{
				a = y[j];
			}
		}

		d = z[1];

		for(j=2;j<=m;j++) //worst fit
		{
			if(d <= z[j])
			{
				d = z[j];
			}
		}
	}

	if(a==0 & d==0) {
		printf("\nCannot allot the fit to any memory block!\n");
	}
	else {
		printf("\nThe best fit is: %d\n",a);
		printf("\nThe worst fit is: %d\n",d);
	}
	return 0;
}
