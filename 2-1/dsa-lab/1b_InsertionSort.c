#include <stdio.h>

int main() {
	int i,j,n,temp,list[20];
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	printf("\nEnter the %d integers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&list[i]);

	for(i=1;i<n;i++) {
		temp=list[i];
		for(j=i;j>0 && temp<list[j-1];j--) {
			list[j] = list[j-1];
		}
		list[j] = temp;
	}
	
	printf("\nSorted array in ascending order: ");
	for(i=0;i<n;i++)
		printf("\t%d",list[i]);
	return 0;
}
