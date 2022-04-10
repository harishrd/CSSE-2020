#include<stdio.h>
 int main()
{
	 int a[50],n,i,j,min,temp;
	 printf("enter the arrqy size:");
	 scanf("%d",&n);
	 printf("enter the elements in to array:");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	
	 }
	 for(i=0;i<n;i++)
	 {  
	    temp=a[i];
	 	min=i;
	 	while(min>0 && temp<(a[min-1]))
	 	{
	 		a[min]=a[min-1];
	 		min=min-1;
		}
		 a[min]=temp;
			 
	 }
	 
	   for(i=0;i<n;i++)
	 {
	 
	   printf("%d\t",a[i]);
     }
     return 0;
 }
