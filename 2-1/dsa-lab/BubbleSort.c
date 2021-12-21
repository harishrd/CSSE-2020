#include<stdio.h>

int main()
{
   int i,j,n,arr[50],temp;
   printf("Enter the number of integers: ");
	scanf("%d",&n);
	printf("\nEnter the %d integers: ",n);
   for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
   for(i=0;i<n;i++) {
		for(j=0;j<n-i-1;j++) {
         if(arr[j]>arr[j+1])
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
      }
   }
   printf("\nSorted array in ascending order: ");
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);
   return 0;
}
