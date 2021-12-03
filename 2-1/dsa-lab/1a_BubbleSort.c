#include <stdio.h>

int main()
{
	int i,j,n,arr[50],temp;
	
	printf("Enter the number of integers: ");
	scanf("%d",&n);
	printf("\nEnter the %d integers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nSorted array in ascending order: ");
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);
	return 0;
}
