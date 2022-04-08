#include <stdio.h>

int main() {
	int i,n,search,list[20];
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	printf("\nEnter the %d integers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&list[i]);
	printf("\nEnter the element to be searched: ");
	scanf("%d",&search);	
	for(i=0;i<n;i++){
		if(search==list[i]){
			printf("\nElement(%d) found at position %d.",search,i+1);
			break;
		}
	}
	if(i==n)
		printf("\n%d is not present in the array.",search);
		
}
